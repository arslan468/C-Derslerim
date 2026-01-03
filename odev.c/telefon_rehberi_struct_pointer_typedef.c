#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

typedef struct telefon_rehberi_struct_pointer_typedef
{
    char *ad;
    char *soyad;
    int telefon;
}rehber;


rehber *rehber_defteri = NULL;

static int  kisi_sayisi = 0;

void yeni_kisi_ekle()
{
    //static int a = 1;
    long int no;
    char gecici_isim[150], gecici_soyad[150];
    printf("\n\n=== %d. Kişi Kaydediliyor ===\n\n",(kisi_sayisi+1));
    printf("\nİsim giriniz: ");
    scanf(" %149s", gecici_isim );
    printf("\nSoyad Giriniz: ");
    scanf(" %149s", gecici_soyad);
    printf("\nTelefon Numarasını giriniz: ");
    scanf(" %ld", &no);

    rehber *temp = (rehber *)realloc(rehber_defteri, (kisi_sayisi + 1) * sizeof(rehber));

    if (temp == NULL)
    {
        printf("Ram de yer kalmadı");
    }

    rehber_defteri = temp;

    rehber_defteri[kisi_sayisi].ad = (char * )malloc((strlen(gecici_isim) +1) * sizeof(char));
    strcpy(rehber_defteri[kisi_sayisi].ad, gecici_isim);
    rehber_defteri[kisi_sayisi].soyad = (char *)malloc((strlen(gecici_soyad) + 1) * sizeof(char));
    strcpy(rehber_defteri[kisi_sayisi].soyad, gecici_soyad);
    rehber_defteri[kisi_sayisi].telefon = no;
    kisi_sayisi ++;
}

void listele()
{
    printf("\n\n\t=== REHBER LİSTELENİYOR ===\n");
    for (int  i = 0; i <= kisi_sayisi; i++)
    {
        printf("\n\n\n\t%d. kişinin bilgileri\n\tAd: %s\n\tSoyisim: %s\n\tTelefon Numarası: %d", (i+1), rehber_defteri[i].ad, rehber_defteri[i].soyad, rehber_defteri[i].telefon);
    }
}




int main ()
{
    selamlama();
    yeni_kisi_ekle();
    yeni_kisi_ekle();


    listele();
    veda();
    for (int  i = 0; i <=kisi_sayisi; i++)
    {  
        free(rehber_defteri[i].ad);
        free(rehber_defteri[i].soyad);
    }
    free(rehber_defteri);
    return 0;

}











/*
typedef struct telefon_rehberi_struct_pointer_typedef
{
    char ad[50];
    char soyad[50];
    int telefon;
}rehber;

rehber* yeni_kisi(char* isim, char* soyisim, int* no);

void yazdir();


int main()
{
    selamlama();
    int giris = 0, kontrol,*no,boyut= 1 * 1024 * 1024,sonuc;
    char* isim, *soyisim;
    soyisim = (char * )malloc(boyut * sizeof(char));
    isim = (char * )malloc(boyut * sizeof(char));

    while (giris != 3)
    {
        printf("\nRehbere yeni kişi eklemek için = 1\nRehberi Listelemek için = 2\nÇıkış yapmak için = 3\n");
        kontrol = scanf(" %d", &giris);
        if (kontrol == 1)
        {
            switch (giris)
            {
            case 1:
                printf("\nİsim Giriniz: ");
                fgets(isim, boyut, stdin);
                printf("\nSoyad Giriniz: ");
                fgets(soyisim, boyut, stdin);
                printf("\nNumarayı Giriniz: ");
                scanf(" %d", no);
                yeni_kisi(isim, soyisim, no);
                break;
            case 2:
                yazdir();
                break;
            
            case 3:
                
                break;
            
            default:
                break;
            }
        }
        else{
            printf("\n\t!!!HATALI TUŞLAMA YAPTINIZ LÜTFEN YALNIZCA TAM SAYI GİRİNİZ!!!\n");
            while (getchar() != '\n');
        }
        
    }
    



    free(soyisim);
    free(isim);
    veda();
    return 0;

}

void yazdir()
{
    rehber* a;
    for (int i = 0; i < 3; i++)
    {
        printf("\t%d. kişinin bilgileri\n\t=== ADI : %s===\n\n\n\t=== SOYADI : %s===\n\n\n\t=== TELEFON NUMARASI : %d===\n\n", (i+1),a->ad,a->soyad,a->telefon );

    } 
}



rehber* yeni_kisi(char* isim, char* soyisim, int* no)
{
    rehber* kisi_olustur = (rehber*)malloc(sizeof(rehber));
    if (kisi_olustur == NULL)
    {
        printf("!!! HATA YER AYRILAMADI !!!");
    }
    strcpy(kisi_olustur->ad, isim);
    strcpy(kisi_olustur->soyad, soyisim);
    kisi_olustur->telefon =  *no;
    return 0;
}
    */