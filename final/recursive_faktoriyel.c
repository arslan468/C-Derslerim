#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>




int recursive_faktoriyel(int x);

int main()
{

    int deger, kontrol, recursive_sonuc;
    
    while (1)
    {
        printf("\nFaktöriyelini alınmasını istediğiniz tam sayıyı giriniz: ");
        kontrol = scanf(" %d", &deger);
        if (kontrol == 1)
        {
            break;
        }
        else
        {
            printf("!!! HATALI TUŞLAMA YAPTINIZ !!!");
            while (getchar() != '\n');
        }
    }

    recursive_sonuc = recursive_faktoriyel(deger);
    printf("\n\n%d",recursive_sonuc);
}


int recursive_faktoriyel(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * recursive_faktoriyel((x-1));
}