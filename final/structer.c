#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

typedef struct 
{

    int yas;
    char ad[50];
    char soyad[50];
    float puan; 
}ogrenci;




int main()
{
    ogrenci kisi[2];

    for (int i = 0; i <= 2; i++)
    {
        printf("\n\nAd: ");
        scanf(" %s", kisi[i].ad);
        printf("\n\nSoyad: ");
        scanf(" %s", kisi[i].soyad);
        printf("\n\nYaş giriniz: ");
        scanf(" %d", &kisi[i].yas);
        printf("\n\nPuan giriniz: ");
        scanf(" %f", &kisi[i].puan);
    }    

    for (int i = 0; i <= 2; i++)
    {
        printf("\n\n\tAd: %s\n\n\tSoyad: %s\n\n\tYaş: %d\n\n\tPuan: %.2f", kisi[i].ad, kisi[i].soyad, kisi[i].yas, kisi[i].puan);

    }
    
}