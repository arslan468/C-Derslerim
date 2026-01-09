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
    char ad[30];
    int no;
    cinsiyet cins;
}ogrenci;

static inline void selam()
{
    printf("=== PROGRAM BAŞLIYOR ===\n\n");
}

int main(void)
{
    selam();
    int kisi_sayisi,karar, yeni_kisi;
    srand(time(NULL));
    printf("\nkaç kişi olucak: ");
    scanf(" %d", &kisi_sayisi);
    ogrenci *ptr = (ogrenci * )malloc( kisi_sayisi * sizeof(ogrenci));
    if (ptr == NULL)return 1;
    
    for (int i = 0; i < kisi_sayisi; i++)
    {
        printf("\nAD: ");
        scanf(" %s", ptr[i].ad);
        ptr[i].no = (rand()%1000)+1;
        printf("\nCİNSİYET SEÇİMİ\n[1]ERKEK\n[2]KIZ\n->");
        scanf(" %d", &karar);
        if (karar == 1) ptr[i].cins = ERKEK;
        else if(karar == 2) ptr[i].cins = KIZ;
        else{
            printf("hatalı tuşlama yaptınız tekrar deneyiniz: ");
            
        }
    }

    for (int i = 0; i < kisi_sayisi ; i++)
    {
        printf("\nad: %s\nno: %d\ncinsiyet: %s\n", ptr[i].ad,ptr[i].no,(ptr[i].cins == ERKEK) ? "ERKEK" : "KIZ");
    }

    printf("yeni kişi eklemek ister misiniz: evet ise 1 hayır ise başka bişey = ");
    scanf(" %d", &yeni_kisi);
    if (yeni_kisi == 1)
    {
        int yeni_sayi = yeni_kisi + kisi_sayisi;
        ogrenci *tmp = (ogrenci *)realloc(ptr, yeni_sayi * sizeof(ogrenci));
        if (tmp == NULL)return 1;
        ptr = tmp;        

        for (int i = kisi_sayisi; i < yeni_sayi; i++)
        {
            printf("\n--- YENİ GELEN %d. KİŞİ ---\n", i + 1);
            printf("AD: ");
            scanf(" %s", ptr[i].ad);
            
            ptr[i].no = (rand() % 1000) + 1;

            TEKRAR_SOR:
            printf("CİNSİYET [1]ERKEK [2]KIZ: ");
            scanf(" %d", &karar);
            if (karar == 1) ptr[i].cins = ERKEK;
            else if (karar == 2) ptr[i].cins = KIZ;
            else goto TEKRAR_SOR;
        }

        for (int  i = kisi_sayisi; i < yeni_sayi; i++)
        {
            printf("\nad: %s\nno: %d\ncinsiyet: %s\n", ptr[i].ad,ptr[i].no,(ptr[i].cins == ERKEK) ? "ERKEK" : "KIZ");
        }
        

    }
    


































    free(ptr);
    return 0;
    
}
