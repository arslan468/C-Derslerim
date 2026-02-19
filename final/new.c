#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 


void zam(int *deger)
{
    *deger += 300;

}

int main ()
{
    /*
    int x = 20;
    int *ptr = &x;
    printf("%d\n", *ptr);

    int mahalle[] = {10,20,30,4,3,2,1};
    int *gezgin = mahalle;
    int uzunluk = (sizeof(mahalle)/sizeof(mahalle[0]));
    for (int i = 0; i < uzunluk; i++)
    {
        printf("\n%d", *gezgin);
        gezgin++;
    }
    */

    int maas = 100;
    zam(&maas);
    printf("\n%d",maas);


    char *mesaj = "selam";

    printf("\n%s", mesaj);

    printf("\n%c", *mesaj);

    int boyu = strlen(mesaj);
    for (int i = 0; i < boyu; i++)
    {
        printf("\n%c",*(mesaj+i));
    }
    






}