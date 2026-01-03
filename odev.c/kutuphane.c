#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


typedef struct
{
    int isbn;
    char ad[50];
    char yazar[50];
    int yil,sayfa,raf;
}kitap;


kitap *yeni_kitap(int isbn, char* ad, char* yazar, int yil, int sayfa, int raf)
{
    kitap* kitap_olustur= (kitap*)malloc(sizeof(kitap));
    if (kitap_olustur == NULL)
    {
        printf("!!!HATA YER AYRILAMADI!!!");
    }
    kitap_olustur->isbn = isbn;
    strcpy(kitap_olustur->ad, ad);
    strcpy(kitap_olustur->yazar, yazar);
    kitap_olustur->sayfa = sayfa;
    kitap_olustur->yil =yil;
    kitap_olustur->raf = raf;
    return kitap_olustur;
}

void yazdir(kitap* a);

kitap* ara(kitap* kitaplar[], int sayi, int no)
{
    for (int i = 0; i < sayi; i++)
    {
        if (kitaplar[i]->isbn == no)
        {   
            return kitaplar[i];
        }
    }
    return NULL;
}



int main ()
{
    selamlama();
    //kitap ktp;
    int sayi = 3, aranan_deger;
    
    kitap* new=yeni_kitap(101, "C Programlama", "Kernighan", 1988, 272, 1);
    kitap* new1 = yeni_kitap(102, "Veri Yapilari", "Cormen", 2009, 1312, 0);
    kitap* new2 = yeni_kitap(103, "Algoritmalar", "Sedgewick", 2011, 955, 1);

    if (new!=NULL)
    {
        //printf("Kitap Oluşturuldu.");
    }


    yazdir(new);
    yazdir(new1);
    yazdir(new2);

    kitap* arama[]= {new, new1, new2};
    int kontrol;

    while (1)
    {
        printf("\nAradığınız kitabın ısbn numarasını giriniz: ");
        kontrol = scanf(" %d", &aranan_deger);
        if(kontrol == 1 )
        {
            break;
        }
        else
        {
            printf("\n\t!!!HATALI TUŞLAMA YAPTINIZ LÜTFEN YALNIZCA TAM SAYI GİRİNİZ!!!\n");
            while (getchar() != '\n');
        }

    }

    kitap* sonuc = ara(arama,  sayi , aranan_deger);

    if(sonuc != NULL)
    {
        printf("\n\nAradığınız kitap bulundu\n");
        yazdir(sonuc);
    }
    else
    {
        printf("\n\nMaalesef aradığın kitap bende yok güzel insan\n");
    }

    free(new);
    free(new1);
    free(new2);

    veda();
    return 0;
}


void yazdir(kitap* a)
{
    if (a == NULL)
    {
        printf("Böyle bir kitap yok bulunamadı!!!");
        return;
    }

    printf("\nISBN      : %d\n", a->isbn);
    printf("\nKitap Adi : %s\n", a->ad);
    printf("\nYazar     : %s\n", a->yazar);
    printf("\nYil       : %d\n", a->yil);
    printf("\nSayfa     : %d\n", a->sayfa);
    if (a->raf==1)
    {
        printf("\n%s adlı kitap rafta\n", a->ad);
    }
    else
    {
        printf("\n%s adlı kitap ödünç\n", a->ad);
    }
    

}