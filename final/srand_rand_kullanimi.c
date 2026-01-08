#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int deger = (rand()%5)+1;
        printf("\n%d\n", deger);
        
    }
    
}