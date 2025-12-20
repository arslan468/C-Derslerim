#include <mongoc/mongoc.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
    mongoc_client_t *client;
    mongoc_collection_t *collection;
    bson_error_t error;
    bson_oid_t oid;
    bson_t *doc;

    // 1. Önce kütüphaneyi ayağa kaldırıyoruz başkanım
    mongoc_init ();

    // 2. Client'ı oluşturuyoruz (Buraya kendi bağlantı adresini yazacan)
    // Eğer lokalde çalışıyorsa genelde: "mongodb://localhost:27017"
    client = mongoc_client_new ("mongodb://localhost:27017/?appname=baskan-project");

    if (!client) {
        fprintf (stderr, "Başkanım client oluşmadı, bir sıkıntı var.\n");
        return 1;
    }

    // 3. Veritabanı ve Koleksiyonu seçiyoruz (db: 'testdb', collection: 'uyeler')
    collection = mongoc_client_get_collection (client, "testdb", "uyeler");

    // 4. İçeriye atacağımız veriyi (BSON) hazırlıyoruz
    doc = bson_new ();
    bson_oid_init (&oid, NULL);
    BSON_APPEND_OID (doc, "_id", &oid);
    BSON_APPEND_UTF8 (doc, "isim", "Mehme Arslan");
    BSON_APPEND_UTF8 (doc, "unvan", "Başkan");

    // 5. Veriyi içeri fırlatıyoruz
    if (!mongoc_collection_insert_one (collection, doc, NULL, NULL, &error)) {
        fprintf (stderr, "Hata var başkan: %s\n", error.message);
    } else {
        printf("Olay tamamdır başkanım! Veri başarıyla eklendi.\n");
    }

    // 6. Ortalığı toplayıp çıkıyoruz, bellek sızmasın ayıp olur
    bson_destroy (doc);
    mongoc_collection_destroy (collection);
    mongoc_client_destroy (client);
    mongoc_cleanup ();

    return 0;
}