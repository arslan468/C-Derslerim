#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>
#include <unistd.h>

typedef struct 
{
    char *ad_soyad;
    int sinif;
    int yas;
}ogrenci;

ogrenci *ogrenci_listesi = NULL;

static int ogrenci_sayisi = 0;

void ic()
{
    char gecici_ad[1000];
    int gecici_sinif, gecici_yas;
    printf("\n\nAd Soyad Bilgsini giriniz: ");
    fgets(gecici_ad, sizeof(gecici_ad), stdin);
    printf("\n\nSınıf bilgisini giriniz: ");
    scanf(" %d", &gecici_sinif);
    printf("\n\nYaş bilgisini giriniz: ");
    scanf(" %d", &gecici_yas);
    getchar();
    
    ogrenci *kontrol = (ogrenci *)realloc(ogrenci_listesi, (ogrenci_sayisi + 1 ) * sizeof(ogrenci));
    
    if(kontrol == NULL)
    {
        printf("\n\n!!!Hata var ram de yer ayrılamadı");
        return;
    }

    ogrenci_listesi = kontrol;
    ogrenci_listesi[ogrenci_sayisi].ad_soyad = (char * )calloc((strlen(gecici_ad)+1), sizeof(char));
    strcpy(ogrenci_listesi[ogrenci_sayisi].ad_soyad, gecici_ad);
    ogrenci_listesi[ogrenci_sayisi].sinif = gecici_sinif;
    ogrenci_listesi[ogrenci_sayisi].yas = gecici_yas;

    ogrenci_sayisi++;
}

void veri_ekle()
{
    int dongu_cıkıs = 1,kontrol,karar;
    while (dongu_cıkıs)
    {
        while (1)
        {
            printf("\n[1] Yeni öğrenci ekle\n[2] Menüden Çık\nSeçiminiz: ");
            kontrol = scanf(" %d", &karar);
            getchar();
            if ((kontrol == 1 && karar == 1) || (kontrol == 1 && karar == 2))
            {
                break;
            }
            else
            {
                printf("\nHATALI TUŞLAMA YAPTINIZ YALNIZCA BELİRTİLEN DEĞERLERİ GİRİNİZ!!!\n");
                while (getchar() != '\n');
            }    
        }

        switch (karar)
        {
        case 1:
            ic();
            break;
        case 2:
            dongu_cıkıs = 0;
            break;
        default:
            break;
        }
    }
}

void listeleme()
{
    printf("=== ÖĞRENCİLER LİSTELENİYOR ===");
    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        printf("\n\nAdı Soyadı: %-5s", ogrenci_listesi[i].ad_soyad);
        printf("\n\nSınıf Bilgisi: %d", ogrenci_listesi[i].sinif);
        printf("\n\nYaş Bilgisi: %d\n", ogrenci_listesi[i].yas);
    }
}

void temizlik()
{
    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        free(ogrenci_listesi[i].ad_soyad);
        
    }
    free(ogrenci_listesi);
    ogrenci_listesi = NULL;
    printf("RAM Hafızası temizlendi");
}

void matris_listeleme()
{
    int sutun = 2;
    int satir = (ogrenci_sayisi + sutun - 1 ) / sutun;
    int index;
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {

            index = (i * sutun) + j;
            if (index < ogrenci_sayisi)
            {
                printf("Sınıf: %3d Yaş: %3d |   ", ogrenci_listesi[index].sinif, ogrenci_listesi[index].yas);
            }
            
        }
        printf("\n\n\n");
    }

}

int main()
{
    selamlama();
    veri_ekle();
    listeleme();
    matris_listeleme();
    veda();
    temizlik();
    return 0;
}