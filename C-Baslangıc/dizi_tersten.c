#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int main ()
{
    selamlama();
    /*
    char *metin;
    long long boyut = 2000 * 1024 * 1024;
    metin = (char *)malloc(boyut * sizeof(char));
    if( metin == NULL)
    {
        printf("YER AYRILAMADI");
        return 1;
    }
    printf("Hafızada ayrılan yer %lld byte veya %lld megabyte", boyut, (boyut/(1024*1024)));
    
    scanf("%lld", boyut);
*/

    char* metin;
    long boyut = 20 * 1024 * 1024;
    metin = (char * )malloc(boyut * sizeof(char));
    if (metin == NULL)
    {
        printf("HAFIZADA YER AYRILAMADI");
        return 1;
    }
    size_t uzunluk = strlen(metin);
    printf("\nUzunluk %lu", uzunluk);
    fgets(metin, boyut, stdin);
    uzunluk = strlen(metin);
    printf("\nUzunluk %lu", (uzunluk-1));
    
    printf("\nMetnin tersten yazılmış hali: ");

    for (int i = uzunluk; i >= 0; i--)
    {
        printf("%c", metin[i]);
    }
    free(metin);
    
    veda();
    return 0;
}