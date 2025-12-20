#include<stdio.h>
#include<mongoc/mongoc.h>

int main(int kelime_sayisi, char *kelimeler[])//terminalden girilen kelimelerin sayısını ve kelimeleri kaydetmek için
{
    mongoc_client_t *veri_tabani_elcisi; // veri tabanı ile iletişimi kuruyor bir nevi telefon hattı
    //pointer kullanmamım sebebi dosya büyüdüğünde sistemin yavaşlamaması için
    mongoc_collection_t *tablo_ismi; //üzerinde çalışacağımız tablonun kaydını tutar
    bson_error_t error; //veritabanından gelen hata kayıtlarını buraya atcaz
    bson_oid_t oid;//yaptığımız kayıtların id sini tutar
    bson_t *veri;//asıl kayıt yapacağımız veri burda olur ad soyad vs.

    mongoc_init();// kütüphane ile iletişimi başlatıyoruz

    veri_tabani_elcisi = mongoc_client_new("mongodb://localhost:27017/?appname=baglanti-rehberi");
    /*burda veri tabanı ile iletişimi oluşturduk
    mongodb://localhost:27017 yazılmasının sebebi veritabanının kendi pc imde olması
    varsayılan olarak localde ki adresi de budur her zaman böyle olmak zorunda değil
    burda verdiğimiz appname olmasada program çalışır ancak bu appname in amacı 
    arka tarafta veri tabanına istek gönderildiğinde bir log oluşur ve bu logta burada vermiş olduğumuz name gözükür 
    eğer isim vermezsek loglar yine oluşur ama isimsiz oluşur ve veri tabanına kimin istek gönderdiğini bulmak zorlaşır 
    profesyonel bir proje için bunu vermen gerekir
    */

    if(!veri_tabani_elcisi)
    {
        fprintf(stderr, "Bağlantıyı kuramadık bir problem var!!!\n");
        return 1;
        //veritabanı ile bağlantı kurulmadığında hata vermesi içib 
    }

    //veritabanı elçisine koleksiyonu getirip tablo_ismine kaydetmesini söylüyoruz
    tablo_ismi = mongoc_client_get_collection(veri_tabani_elcisi, "rehber", "ogrenme");

    veri = bson_new(); //Veri için hafızada yer hazırlıyoruz
    bson_oid_init(&oid, NULL); //benzersiz bir id oluştur
    BSON_APPEND_OID(veri, "_id", &oid);
    BSON_APPEND_UTF8(veri, "isim", "ikinci deneme");
    BSON_APPEND_UTF8(veri, "soyad", "soyadımız");
    BSON_APPEND_INT32(veri, "ogrenci_numara", 423344);
    /* 
        bu adımda veri tabanına verileri gönderdik ancak dikkat edilmesi gereken bir nokta var veri türünü göre değişiyor
        örneğin
        string ifadeler için BSON_APPEND_UTF8 kullanırız utf8 olması türkçe karakterleri de tanır
        tam sayılar için BSON_APPEND_INT32 kullanırız
        daha büyük tc tel no vs gibi sayılar için BSON_APPEND_INT64 kullanırız
        float double gibi ondalıklı sayılar için BSON_APPEND_DOUBLE kullanırız
        mantıksal operatörler için ise BSON_APPEND_BOOL kullanırız
    */

    if(!mongoc_collection_insert_one(tablo_ismi, veri, NULL, NULL, &error))
    {
        fprintf(stderr, "===BİR PROBLEM VAR: %s\n", error.message);
        //fprintf kullanmamızın amacı çıktıyı vericeği yeri seçmek istememiz
    }
    else
    {
        printf("VERİ EKLEME İŞLEMİ BAŞARILI\n");
    }

    bson_destroy(veri);//gönderdiğimiz verinin kopyasını temziliyoruz artık kaydedildi
    mongoc_collection_destroy(tablo_ismi);//bağlantıyı kesiyoruz
    mongoc_client_destroy(veri_tabani_elcisi);//bağlantıyı kesiyoruz
    mongoc_cleanup();//bağlantıyı kesiyoruz

    return 0;

}




/*
ÇALIŞTIRMAK İÇİN 

1.ADIM

gcc -o mongo_rehberi mongo_baglanti_rehberim.c \
-I/opt/homebrew/Cellar/mongo-c-driver/2.2.1/include/mongoc-2.2.1 \
-I/opt/homebrew/Cellar/mongo-c-driver/2.2.1/include/bson-2.2.1 \
-L/opt/homebrew/Cellar/mongo-c-driver/2.2.1/lib \
-lmongoc2 -lbson2


2.ADIM

./mongo_rehberi


*/