/*

Kapsadığı Konular:

Hafta 2-3 (Algoritma Mantığı, Akış)

Hafta 4 (Değişkenler, printf/scanf, Temel Operatörler, if-else, while/do-while)

Hafta 6'dan ufak bir esinti (rand() ile rastgele sayı)

Menü: Program açılınca kullanıcıya soracak: "1- Sayı Tahmin Oyunu, 2- Hesap Makinesi, 3- Çıkış".

Sayı Tahmin: Bilgisayar 1-100 arası sayı tutacak, sen bilemeye çalışacaksın. "Aşağı in", "Yukarı çık" diyecek. Kaç kerede bildiğini sayacak.

Hesap Makinesi: İki sayı alıp, kullanıcı isteğine göre +, -, *, / işlemi yapıp sonucu basacak basit bir fonksiyon kullanacaksın.
*/

#include <stdio.h>
#include <stdlib.h>
#include "selam.h"
#include <time.h>


void menu ();
int tahmin ();
int tahmin_yaklasma(int x);
int hesap_makinesi (int x);

int rastgele, mesafe = 0;

int main ()
{
    selamlama();
    menu();
    int giris_kontrol = 0,secim;

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
            printf("1-100 arasında tahmininizi giriniz: %d",secim);
            tahmin();
            
            tahmin_yaklasma(secim);
            break;
        case 2:
            printf("Hesap yapmak istediğiniz sayıları giriniz: %d", secim);
            break;
        case 3:
            printf("Görüşmek üzere yine bekleriz👋");
            break;
        default: 
            break;
    }

    return 0;
}

int tahmin_yaklasma(int x)
{
    mesafe = (mesafe - x);
    if(mesafe < 0)
        mesafe = -1*mesafe;

    if(mesafe == 0)
    {
        
    }

    

    
}


int tahmin()
{
    srand(time(NULL));
    rastgele = ((random() % 100)+1);
    return rastgele;
}







void menu()
{
    printf("1-Sayı Tahmin Oyunu\n 2-Hesap Makinesi\n 3-Çıkış\n !!!Yalnızca seçeneklerde ki tam sayıları giriniz!!!\n");
}