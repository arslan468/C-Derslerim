// recursion fonksiyon ile verilen değer aralığında istenilen artış miktarı kadar artan fonksiyon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

int recursive_aralikli_toplama(int artis, int maks, int anlik)
{
    if (maks < anlik)
    {
        return 0;
    }
    return anlik + recursive_aralikli_toplama(artis, maks,(anlik + artis));
}

int main()
{
    int artis_miktari, maks_deger,baslangic=0;
    selamlama();
    printf("\n\nArtış miktarını giriniz: ");
    scanf(" %d", &artis_miktari);
    printf("\n\nBaşlangıç değerini giriniz: ");
    scanf(" %d", &baslangic);
    printf("\n\nSon değeri giriniz: ");
    scanf(" %d", &maks_deger);

    int sonuc = recursive_aralikli_toplama(artis_miktari, maks_deger, baslangic);
    printf("%d",sonuc);
    veda();
    return 0;
}