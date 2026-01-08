#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>



typedef struct 
{
    char *ad;
    char *sehir;
    int plaka;
}kisi_listesi;



int main()
{
    selamlama();
    int *ptr, kisi_sayisi;
    printf("Kaç kişi giriceksin: ");
    scanf(" %d", &kisi_sayisi);

    kisi_listesi id[kisi_sayisi];

    for (int i = 0; i < kisi_sayisi; i++)
    {
        id[i].ad = (char * )calloc(1024, sizeof(char));
        id[i].sehir = (char *)calloc(1024, sizeof(char));
    }

    for (int j = 0; j < kisi_sayisi; j++)
    {
        printf("\n\nAd: ");
        scanf(" %s", id[j].ad);
        printf("\n\nSehir: ");
        scanf(" %s", id[j].sehir);
        printf("\n\nPlaka: ");
        scanf(" %d", &id[j].plaka);
    }

    int ad_uzunluk,sehir_uzunluk;

    for (int i = 0; i < kisi_sayisi; i++)
    {
        ad_uzunluk = strlen(id[i].ad);

        id[i].ad = (char *)realloc(id[i].ad, ad_uzunluk * sizeof(char));

        sehir_uzunluk = strlen(id[i].sehir);
        
        id[i].sehir = (char *)realloc(id[i].sehir, sehir_uzunluk * sizeof(char));
    }


    for (int i = 0; i < kisi_sayisi; i++)
    {
        printf("\n\nAd: %s\n\nŞehir: %s\n\nPlaka: %d\n\n",id[i].ad, id[i].sehir, id[i].plaka);
    }

    

    



    /*
    kisi_listesi id[2];

    for (int i = 0; i <= 2; i++)
    {
        printf("\n\nAdınızı giriniz: ");
        scanf(" %s", id[i].ad);
        printf("\n\nŞehir adını giriniz: ");
        scanf(" %s", id[i].sehir);
        printf("\n\nPlakasını giriniz: ");
        scanf(" %d", id[i].plaka);
    }

    for (int i = 0; i <= 2; i++)
    {
        printf("\n\nAd: %s\n\nŞehir: %s\n\nPlaka: %d\n\n\n", id[i].ad,id[i].sehir, id[i].plaka);
    }   
 */   
    veda();
    return 0;
}