#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>

int recursive_fibonacci(int x);


int main()
{
    int deger, sonuc;
    selamlama();
    printf("Fibonacci dizisinde ki kaçıncı adımı bulmak istersiniz: ");
    scanf(" %d", &deger);
    sonuc = recursive_fibonacci(deger);
    printf("\n\nFibonacci dizisinin %d. değeri = %d", deger,sonuc);
    veda();
    return 0;
}

int recursive_fibonacci(int x)
{
    if (x <= 2)
    {
        return 1;
    }
    return  recursive_fibonacci(x-1) + recursive_fibonacci(x-2);
}