#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

int bakteri_hesapla(int sayi, int zaman)
{
    if (zaman == 1)
    {
        return sayi;
    }
    int yeni_sayi = sayi * 2;
    return bakteri_hesapla(yeni_sayi, (zaman-1));
}

int main()
{
    selamlama();
    int zaman;
    int sayi, sonuc;
    printf("\nBaşlangıçta ki bakteri sayısını giriniz: ");
    scanf(" %d", &sayi);

    printf("\nKaç saat geçti: ");
    scanf(" %d", &zaman);

    sonuc = bakteri_hesapla(sayi, zaman);
    printf("\n\n%d saate oluşan bakteri sayısı %d", zaman, sonuc);
    veda();
}  