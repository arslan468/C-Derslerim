#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int puan_hesaplama(int x[], int deger_sayisi)
{
    int takim_puani=0;
    for (int i = 0; i <= deger_sayisi; i++)
    {
        switch (x[i])
        {
        case 0:
            takim_puani += 1;
            break;
        case 1:
            break;
        case 2:
            takim_puani += 3;
            break; 
        default:
            break;
        }
    }
    return takim_puani;
}

int main()
{
    selamlama();
    int dizi[]= {2,1,0,0,2,1,1,2,1,0};
    int uzunluk = (sizeof(dizi)/sizeof(dizi[0]));
    int sonuc = puan_hesaplama(dizi, uzunluk);
    printf("\n\t%d\n", sonuc);
    veda();
    return 0;
}