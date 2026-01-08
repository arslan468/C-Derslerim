#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int main()
{
    selamlama();
    int a = 0,b = 0;
    
    printf("\nSırayla Satır ve Sütun bilgilerini giriniz: ");
    scanf(" %d",&a);
    scanf(" %d", &b);
    int matrisim [a][b];
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("\n%d. satırın %d. sütununda ki değeri giriniz: ", (i+1), (j+1));
            scanf(" %d", &matrisim[i][j]);
        }
    }   

    printf("\n\ntek değerleri sansürleyerek matrisi dikdörtgen şekilde ekrana yazdırma \n\n\n");

    for( int k = 0;  k < a; k++)
    {
        for (int h = 0; h < b; h++)
        {
            //printf("\n%d. satırın %d. sütununda ki değer: %d\n\n", (k+1), (h+1), matrisim[k][h]);
            if ((matrisim[k][h] % 2) == 1)
            {
                printf(" X \t");
            }
            else
            {
                printf(" %d \t", matrisim[k][h]);
            }
        }
        printf("\n\n");
        
    }
    
    veda();
    return 0;
}