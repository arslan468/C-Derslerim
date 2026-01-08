#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 



typedef struct 
{
    char *ad;
}id;


int main()
{
    id isim;
    isim.ad = (char *)calloc(1024, sizeof(char));

    scanf(" %s", isim.ad);

    int uzunluk = strlen(isim.ad);

    isim.ad = (char *)realloc(isim.ad, uzunluk * sizeof(char));

    printf("%s", isim.ad);

    
    int deger = 32123;
    int *ptr = &deger;
    printf("\n%d", ptr);
    printf("\n%p", ptr);
    printf("\n%d",*ptr);

}