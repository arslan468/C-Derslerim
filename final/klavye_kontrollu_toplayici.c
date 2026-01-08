#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

int toplam = 0;

void toplama(int x)
{
    toplam += x;
}

int main()
{
    selamlama();

    int dongu = 1, kontrol, yanit;
    while (dongu)
    {
        while (1)
        {
            
            printf("\n[1]Çıkış yapmak için 0 veya \n[2] Toplamak istediğiniz tam sayıyı giriniz: ");
            kontrol = scanf(" %d", &yanit);
            getchar();
            if (kontrol == 1)
            {
                break;
            }
            else
            {
                printf("\nHATALI TUŞLAMA YAPTINIZ YALNIZCA BELİRTİLEN DEĞERLERİ GİRİNİZ!!!\n");
                while(getchar() != '\n');
            }
        }

     
        switch (yanit)
        {
        case 0:
            dongu = 0;
            printf("\n\n\nGirdiğiniz sayıların toplamı %d", toplam);
            break;
        default:
            toplama(yanit);
            break;
        }
    }

    veda();
    return 0;
}