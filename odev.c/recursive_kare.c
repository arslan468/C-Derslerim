#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>
#include <unistd.h>

int recursive(int x, int ilk);

int main()
{
    int buyukluk;
    printf("Kare Kaç karakter büyüklüğünde olsun: ");
    scanf(" %d", &buyukluk);
    for (int i = 0; i < buyukluk; i++)
    {
        for (int j = 0; j < buyukluk; j++)
        {
            printf(" * ");
        }
        printf("\n\n");
    }

    printf("\n\n\n===Recursive başlıyor===\n\n\n");
    recursive(buyukluk, buyukluk);

    
    return 0;   
}


int recursive(int x, int ilk)
{


    for (int i = 0; i < ilk; i++)
    {
        printf(" * ");
    }
    printf("\n\n");
    if (x==1)
    {
        return 0;
    }
    return recursive((x-1), ilk);
}