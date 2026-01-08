//rakamları birbirinden farklı üç basamaklı kaç sayı olduğunu bulan program

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

int main ()
{
    int a,b,c,sayac = 0;

    for (int i = 100; i < 999; i++)
    {
        a = i/100;
        b = (i/10)%10;
        c = i%10;
        if (a!=b && b!=c && a!=c)
        {
            sayac++;
        }
    }
    printf("\n%d\n", sayac);
    
}