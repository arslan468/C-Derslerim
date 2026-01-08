#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


void sezar(int x, char *sifresiz);
void ters_yazim(char *duz);

int main()
{
    selamlama();
    
    char* metin;
    long long boyut = 5 * 1024 * 1024;
    metin = (char *)malloc(boyut * sizeof(char));
    if(metin == NULL)
    {
        printf("!!!HATA HAFIZADA YER AYRILAMADI!!!");
        return 1;
    }
    
    printf("Bir metin giriniz: ");
    fgets(metin, boyut, stdin);
    int kaydirma;
    printf("Kaç karakter kaydırma olsun: ");
    scanf(" %d", &kaydirma);
    //printf("%d", uzunluk); //metnin uzunluğunu verir
    printf("Girmiş olsuğunuz metin: %s",metin);
    sezar(kaydirma, metin);
    ters_yazim(metin);


    veda();
    return 0;
}


void ters_yazim(char *duz)
{
    size_t uzunluk = strlen(duz);
    printf("Metnin uzunluğu %lu ", uzunluk);
    printf("\n\nŞifrelenmiş metnin tersten yazımı: ");
    for (int i = uzunluk; i >= 0; i--)
    {
        printf("%c", duz[i]);
    }
}

void sezar(int x, char *sifresiz)
{
    int i = 0;
    while (sifresiz[i] != '\0' && sifresiz[i] != '\n')
    {
        sifresiz[i] = (char)(sifresiz[i]+x);
        i++;
    }
    sifresiz[i] = '\0';
    
    printf("\nŞifrelenmiş metin: %s\n", sifresiz);
}