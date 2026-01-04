#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>
#include <unistd.h>

typedef struct 
{
    char *ad;
    int puan;
    int cozdugu_soru;
}yarismaci;


yarismaci *yarimaci_defteri = NULL;

static int yarismaci_sayisi = 0;

void yarismaci_ekle()
{
    char gecici_isim[1000];
    int gecici_puan, gecici_soru;
    
    printf("\n\nAd soyad giriniz: ");
    fgets(gecici_isim, sizeof(gecici_isim), stdin);
    printf("\n\nPuanınız: ");
    scanf(" %d", &gecici_puan);
    getchar();
    printf("\n\nGirdiğiniz puan bilgisine göre net soru sayınız hesaplanıyor...");
    gecici_soru = (gecici_puan * 0.23) + 1;
    printf("\nÇözmüş olduğunuz net soru: %d", gecici_soru);

    yarismaci *kontrol = (yarismaci *)realloc(yarimaci_defteri, (yarismaci_sayisi + 1) * sizeof(yarismaci));

    if (kontrol == NULL)
    {
        printf("\n\n!!! HAFIZADA YER YOK !!!\n\n");
    }

    yarimaci_defteri = kontrol;
    yarimaci_defteri[yarismaci_sayisi].ad = (char * )malloc((strlen(gecici_isim)+1)*sizeof(char));
    strcpy(yarimaci_defteri[yarismaci_sayisi].ad, gecici_isim);
    yarimaci_defteri[yarismaci_sayisi].puan = gecici_puan;
    yarimaci_defteri[yarismaci_sayisi].cozdugu_soru = gecici_soru;
    
    yarismaci_sayisi++;
}

void listele()
{
    printf("\n\n=== REHBER LİSTELENİYOR ===\n\n");
    for (int i = 0; i <=  yarismaci_sayisi; i++)
    {
        printf("\nAd Soyad: %s", yarimaci_defteri[i].ad);
        printf("\nPuan Durumu: %d", yarimaci_defteri[i].puan);
        printf("\nÇözülen net soru sayısı: %d\n\n\n", yarimaci_defteri[i].cozdugu_soru);
    }
}


void temizlik()
{
    for (int i = 0; i <= yarismaci_sayisi; i++)
    {
        if (yarimaci_defteri[i].ad != NULL)
        {
            free(yarimaci_defteri[i].ad);
        }
    }
    free(yarimaci_defteri);
    yarimaci_defteri = NULL;
    
}

int main ()
{
    selamlama();
    yarismaci_ekle();
    yarismaci_ekle();
    listele();
    veda();
    temizlik();
    return 0;
}