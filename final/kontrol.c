#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char *ad;
    char soyad[33];
    int kod;
}kisi;


int main(void) {

    kisi bir;
    kisi *ptr = &bir;
    ptr->kod = 5;
    ptr->ad = "alp";
    printf("\n%d\n%s\n", ptr->kod, ptr->ad);
    strcpy(ptr->soyad, "arslan");
    printf("\n%s\n", ptr->soyad);
    /*
    int *x = malloc(sizeof(int));   // 1 int'lik yer

    if (x == NULL) {
        return 1;
    }

    *x = 42;
    printf("Deger: %d\n", *x);

    free(x);*/
    return 0;
}
