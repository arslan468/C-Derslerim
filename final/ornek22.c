#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 
typedef enum{
    ERKEK = 1,
    KIZ = 2
}cinsiyet;
typedef struct 
{

    char ad[20];
    int id;
    cinsiyet cins;

}ogrenci;


int main()
{
    int secim;
    selamlama();
    srand(time(NULL));

    ogrenci *ptr;
    int kisi_sayisi;
    printf("Kaç kişi eklemek istersinzi: ");
    scanf(" %d", &kisi_sayisi);
    ptr = (ogrenci *)malloc(kisi_sayisi * sizeof(ogrenci));


    for (int i = 0; i < kisi_sayisi; i++)
    {
        printf("Ad griiniz: ");
        scanf(" %s", ptr[i].ad);
        ptr->id= (rand()%100)+1;
        printf("Cinsiyet ERKEK-1\nKADIN-2\n ");
        scanf(" %d", &secim);
        if (secim == 1)
        {
            ptr[i].cins = ERKEK;
        }
        else if(secim == 2)
        {
            ptr[i].cins = KIZ;
        }
    }

    char cinsiyetler[50];
    for (int i = 0; i <kisi_sayisi; i++)
    {
        if (secim == 1)
        {
            printf("\n\nAD: %s\n\nid: %d\n\nCinsiyet: erkek", ptr[i].ad,ptr[i].id);        }
        else if(secim == 2)
        {
            ptr[i].cins = KIZ;
        }
        //printf("\n\nAD: %s\n\nid: %d\n\nCinsiyet: %s", ptr[i].ad,ptr[i].id,cinsiyetler);
    }
    
    



    veda();
    return 0;
}