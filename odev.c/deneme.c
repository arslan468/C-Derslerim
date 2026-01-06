


//YAPAY ZEKA KODU 




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "selam.h" // Bende yok gardaş bu, sende kalsın
#include <time.h>
#include <unistd.h>

typedef struct 
{
    char *ad_soyad;
    int sinif;
    int yas;
} ogrenci;

ogrenci *ogrenci_listesi = NULL;
static int ogrenci_sayisi = 0;

void ic()
{
    char gecici_ad[1000];
    int gecici_sinif, gecici_yas;

    printf("\n\nAd Soyad Bilgisini giriniz: ");
    fgets(gecici_ad, sizeof(gecici_ad), stdin);

    // --- DÜZELTME 1: Enter karakterini (\n) yok etme operasyonu ---
    // Yoksa matrisin kayar, şeklin bozulur.
    gecici_ad[strcspn(gecici_ad, "\n")] = 0; 

    printf("Sınıf bilgisini giriniz: ");
    scanf(" %d", &gecici_sinif);
    printf("Yaş bilgisini giriniz: ");
    scanf(" %d", &gecici_yas);
    getchar(); // Buffer temizliği

    ogrenci *kontrol = (ogrenci *)realloc(ogrenci_listesi, (ogrenci_sayisi + 1) * sizeof(ogrenci));
    
    if(kontrol == NULL)
    {
        printf("\n\n!!!Hata var ram de yer ayrılamadı, PC tost makinesi mi la?");
        return;
    }

    ogrenci_listesi = kontrol;
    
    // --- DÜZELTME 2: Null terminator (\0) için +1 ekledik ---
    ogrenci_listesi[ogrenci_sayisi].ad_soyad = (char *)calloc(strlen(gecici_ad) + 1, sizeof(char));
    
    strcpy(ogrenci_listesi[ogrenci_sayisi].ad_soyad, gecici_ad);
    ogrenci_listesi[ogrenci_sayisi].sinif = gecici_sinif;
    ogrenci_listesi[ogrenci_sayisi].yas = gecici_yas;

    ogrenci_sayisi++;
    printf("\n>> Öğrenci başarıyla eklendi gardaşım.\n");
}

void veri_ekle()
{
    int dongu_cıkıs = 1, kontrol, karar;
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
                printf("\nHATALI TUŞLAMA! Angara bebesi gibi düzgün bas şuna!\n");
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
    printf("\n=== LİSTE MODU ===\n");
    // --- DÜZELTME 3: '<=' değil '<' olacak. Yoksa olmayan elemanı okursun. ---
    for (int i = 0; i < ogrenci_sayisi; i++) 
    {
        printf("Adı: %-15s | Sınıf: %d | Yaş: %d\n", 
               ogrenci_listesi[i].ad_soyad, 
               ogrenci_listesi[i].sinif, 
               ogrenci_listesi[i].yas);
    }
}

void temizlik()
{
    // --- DÜZELTME 4: Burda da '<' olacak ---
    for (int i = 0; i < ogrenci_sayisi; i++)
    {
        free(ogrenci_listesi[i].ad_soyad);
    }
    free(ogrenci_listesi);
    ogrenci_listesi = NULL;
    printf("\nRAM Hafızası temizlendi, dükkanı kapattık.\n");
}

void matris_listeleme()
{
    printf("\n=== MATRİS MODU (Baklava Dilimi Gibi) ===\n\n");
    
    if (ogrenci_sayisi == 0) {
        printf("La gardaş öğrenci yok ki neyi listeleyim?\n");
        return;
    }

    int sutun = 2; // Yan yana kaç kişi olsun?
    int satir = (ogrenci_sayisi + sutun - 1) / sutun;
    int index;

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            index = (i * sutun) + j;
            if (index < ogrenci_sayisi)
            {
                // %-15s: İsmi sola yasla, 15 karakter yer ayır (Hizalı dursun diye)
                printf("[ Ad: %-10s S:%2d Y:%2d ]   ", 
                       ogrenci_listesi[index].ad_soyad, 
                       ogrenci_listesi[index].sinif, 
                       ogrenci_listesi[index].yas);
            }
        }
        printf("\n\n"); // Satır bitince boşluk
    }
}

int main()
{
    // selamlama(); // Bunu açarsın
    veri_ekle();
    
    if(ogrenci_sayisi > 0) {
        listeleme();
        matris_listeleme();
    } else {
        printf("\nHiç veri girmeden kaçtın, ayıp ettin...\n");
    }
    
    // veda(); // Bunu da açarsın
    temizlik();
    return 0;
}