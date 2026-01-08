#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>
#include <unistd.h>


typedef struct 
{
    char *ad_soyad;
    int sure;
    int toplam_ucret;
}abonelik;

abonelik *abonelik_listesi = NULL;
static int arac_sayisi = 0;

void ekle_ici()
{
    char gecici_isim[1000];
    int gecici_sure, gecici_tutar;
    printf("\n\nAd Soyad giriniz: ");
    fgets(gecici_isim, sizeof(gecici_isim), stdin);
    printf("\n\nKaç saat kalcağınızı giriniz: ");
    scanf(" %d", &gecici_sure);
    getchar();
    gecici_tutar = gecici_sure * 150;
    
    abonelik *temp = (abonelik *)realloc(abonelik_listesi, (arac_sayisi + 1 ) * sizeof(abonelik));
    if (temp == NULL)
    {
        printf("!!! HATA RAM DE YER AYRILAMADI !!!");
        return;
    }

    
    abonelik_listesi = temp;
    abonelik_listesi[arac_sayisi].ad_soyad = (char *)calloc(strlen(gecici_isim), sizeof(char));
    strcpy(abonelik_listesi[arac_sayisi].ad_soyad, gecici_isim);
    abonelik_listesi[arac_sayisi].sure = gecici_sure;
    abonelik_listesi[arac_sayisi].toplam_ucret = gecici_tutar;
    arac_sayisi++;

}

void ekle()
{
    int devam_durumu = 1;
    while (devam_durumu)
    {
        int kontrol,karar;
        while (1)
        {
            printf("\nAraç eklemek için = 1\nÇıkış Yapmak için = 2'ye basınız: ");
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
            ekle_ici();
            break;
        case 2:
            devam_durumu = 0;
            break;
        default:
            break;
        }
    }
}

void listele()
{
    printf("=== LİSTELEME BAŞLIYOR ===");
    for (int i = 0; i < arac_sayisi; i++)
    {
        printf("\n\n%d. Araç Bilgileri\n\nAd Soyad bilgisi: %s", (i+1),abonelik_listesi[i].ad_soyad);
        printf("\nKalınan Süre bilgisi: %d", abonelik_listesi[i].sure);
        printf("\n\nToplam ücret bilgisi: %d", abonelik_listesi[i].toplam_ucret);
    }
}

void temizle()
{
    for (int i = 0; i < arac_sayisi; i++)
    {
        free(abonelik_listesi[i].ad_soyad);
    }
    free(abonelik_listesi);
    abonelik_listesi = NULL;
}



int main()
{
    selamlama();
    ekle();
    listele();
    temizle();
    veda();
    return 0;
}

