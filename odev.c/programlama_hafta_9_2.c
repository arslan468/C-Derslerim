#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
    float sepet[5] = {25.50, 40.00, 15.75, 60.00, 12.00},toplam = 0;

    int dizi_uzunluk = sizeof(sepet) / sizeof(sepet[0]);


    printf("\nİlk eleman %.2f Son eleman %.2f\n", sepet[0], sepet[(dizi_uzunluk-1)]);

    for (int i = 0; i < dizi_uzunluk; i++)
    {
        toplam = sepet[i] + toplam;
    }
    
    printf("-------------------------------------\nTüm ürünlerin toplam fiyatı: %.2f\n -------------------------------------\n",toplam);
    
    for (int d = 0; d< dizi_uzunluk; d++)
    {
        printf("%d.ürün: %.2fTL\n ",(d+1), sepet[d]);
    }


    for (int k = 0; k < dizi_uzunluk; k++)
    {
        sepet[k] = 1.1 * sepet[k];
    }

    printf("\n-------------------------------------------------------------------\n");

    for (int b= 0; b< dizi_uzunluk; b++)
    {
        printf("%d.ürün: %.2fTL\n ",(b+1), sepet[b]);
    }

    
}