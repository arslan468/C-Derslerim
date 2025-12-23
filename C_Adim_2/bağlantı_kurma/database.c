#include <stdio.h>
#include <mongoc/mongoc.h>
#include "header.h"


void ogrenci_kaydet(Ogrenci ogr)
{
    mongoc_client_t *veri_tabanı_baglanti;
    mongoc_collection_t *tablo_name;
    bson_error_t error;
    bson_oid_t oid; 
    bson_t *giden_veriler;

    mongoc_init();

    veri_tabanı_baglanti = mongoc_client_new("mongodb://localhost:27017/?appname=kompleks-yapi");

    if(!veri_tabanı_baglanti)
    {
        fprintf(stderr, "Bağlantı Hatası!!!\n");
        return;
    }

    tablo_name = mongoc_client_get_collection(veri_tabanı_baglanti, "C_and_mongoc", "bilgi");

    giden_veriler = bson_new();
    bson_oid_init(&oid, NULL);
    BSON_APPEND_OID(giden_veriler, "_id", &oid);
    BSON_APPEND_UTF8(giden_veriler, "isim", ogr.isim);
    BSON_APPEND_UTF8(giden_veriler, "soyad", ogr.soyad);
    BSON_APPEND_INT32(giden_veriler, "numara", ogr.numara);

    if(!mongoc_collection_insert_one(tablo_name, giden_veriler, NULL, NULL, &error))
    {
        fprintf(stderr, "Hata %s\n", error.message);
    }
    else
    {
        printf("Veri tabanına başarıyla kaydedildi.\n");
    }

    bson_destroy(giden_veriler);
    mongoc_collection_destroy(tablo_name);
    mongoc_client_destroy(veri_tabanı_baglanti);
    mongoc_cleanup();

}