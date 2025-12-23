#include <stdio.h>
#include <stdlib.h> // malloc ve free için ŞART
#include <string.h> // strlen ve strcpy için ŞART
#include "header.h"

int main ()
{
    Ogrenci ogr;
    char baslangic_hafiza[1024];

    printf("isim giriniz: ");
    scanf(" %s", baslangic_hafiza );

    //şimdi char dizisinin boyutunu girilen verinin uzunluğu kadar ayarlıyoruz
    ogr.isim = (char*)malloc(strlen(baslangic_hafiza) + 1); 
    strcpy(ogr.isim, baslangic_hafiza); // ismi kopyalıyoruz

    printf("Soyad giriniz: ");
    scanf(" %s", baslangic_hafiza);

    ogr.soyad = (char*)malloc(strlen(baslangic_hafiza) + 1);
    strcpy(ogr.soyad, baslangic_hafiza);

    printf("Numara Giriniz: ");
    while (scanf(" %d", &ogr.numara) != 1)// girilen verinin yalnızca sayı olmasını sağlar
    {
        printf("Yalnızca rakam giriniz!!!\n");

        while (getchar() != '\n');
    }
    
    

    printf("Girmiş olduğunuz veriler toplam %lu byte veritabanına kaydedilmek üzere gitti.\n", strlen(ogr.isim) + strlen(ogr.soyad));

    ogrenci_kaydet(ogr);

    //verileri gönderdikten sonra kopyalrını temizleyip hafızayı temizliyoruz
    free(ogr.isim);
    free(ogr.soyad);

    return 0;
}
