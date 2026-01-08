#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 

typedef struct 
{
    char *isim;
    int id;
    int kupon;
    
}kullanici;


int main ()
{
    srand(time(NULL));

    int kisi_sayisi= 2,uzunluk, rastgele;
    kullanici *ptr = (kullanici *)malloc( kisi_sayisi * sizeof(kullanici));
    
    
    for (int i = 0; i < kisi_sayisi; i++)
    {
        ptr[i].isim = (char *)calloc(1024,sizeof(char));
        printf("\n%d.",(i+1));
        scanf(" %s", ptr[i].isim);
        uzunluk = strlen(ptr[i].isim);
        ptr[i].isim = (char *)realloc(ptr[i].isim, uzunluk * sizeof(char) );
        rastgele = (rand()%100)+1;
        ptr[i].id = rastgele;
        rastgele = (rand()%850)+1;
        ptr[i].kupon = rastgele;
    }

    for (int i = 0; i <kisi_sayisi; i++)
    {
        printf("\n\nİsim: %s\n\nİd: %d\n\nKupon: %d\n\n",ptr[i].isim, ptr[i].id, ptr[i].kupon);
    }
    
    



}