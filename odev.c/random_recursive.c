#include <stdio.h>
#include <stdlib.h>
#include "selam.h"
#include <time.h>


void menu ();
int tahmin ();
int tahmin_yaklasma(int x);
int hesap_makinesi (int x);
void islem_secme();

int rastgele, mesafe = 0,tahmin_sayisi;
float sayi1, sayi2, cevap;
int main ()
{
    selamlama();
    menu();
    int giris_kontrol = 0,secim;
    int islem;
    
    while (1)
    {
        giris_kontrol = scanf(" %d", &secim);
        if ((giris_kontrol == 1) && (secim < 4) && (0 < secim) )
        {
            break;
        }
        else
        {
            menu();
            printf("\n\n\n===Hatalı giriş yaptınız===\n\n\n");
            while (getchar() != '\n');
        }
    }
    
    switch(secim)
    {
        case 1: 
            tahmin();
            printf("1-100 arasında tahmininizi giriniz: ");
            scanf(" %d", &tahmin_sayisi);
            tahmin_yaklasma(secim);
            break;
        case 2:
            islem_secme();
            printf("Yapmak istediğiniz işlemi seçiniz: ");
            scanf(" %d", &islem);
            cevap = hesap_makinesi(islem);
            printf("Sonuç: %.2f", cevap);
            break;
        case 3:
            printf("Görüşmek üzere yine bekleriz👋");
            break;
        default: 
            break;
    }

    return 0;
}

int hesap_makinesi (int x)
{
    printf("Sayıları giriniz: ");
    scanf(" %f %f", &sayi1, &sayi2 );
    float sonuc;

    switch (x)
    {
    case 1:
        sonuc =  (sayi1 + sayi2);
        return sonuc;
        break;
    case 2:
        sonuc =  (sayi1 - sayi2);
        return sonuc;
        break;
    case 3:
        sonuc =  (sayi1 * sayi2);
        return sonuc;
        break;
    case 4:
        sonuc = (sayi1 / sayi2);
        return sonuc;
        break;
    default:
        printf("Hatalı tuşlama yaptınız\n");
        break;
    }
}

void islem_secme()
{
    printf("Yapmak istediğiniz işlemi seçiniz\n\t1-'+'\n\t2-'-'\n\t3-'*'\n\t4-'/'\n");
}

int tahmin_yaklasma(int x)
{
    mesafe = abs(rastgele - x);
    
    if(mesafe == 0)
    {
        printf("\nBİNGO SAYIYI DOĞRU BİLDİNİZ TEBRİKLER\n ");
        return 1;
    }
    else
    {
        printf("Sayıya olan uzaklığınız %d\n", mesafe);
        printf("\n\n1-100 arasında yeni bir tam sayı giriniz: ");
        scanf(" %d", &tahmin_sayisi);
        return tahmin_yaklasma(tahmin_sayisi);
    }
}

int tahmin()
{
    srand(time(NULL));
    rastgele = ((random() % 5)+1);
    printf("\n%d\n",rastgele);
    return 0;
}

void menu()
{
    printf("1-Sayı Tahmin Oyunu\n 2-Hesap Makinesi\n 3-Çıkış\n !!!Yalnızca seçeneklerde ki tam sayıları giriniz!!!\n");
}