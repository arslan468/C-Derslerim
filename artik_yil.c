#include<stdio.h>

int main ()
{
    int yil;

    printf("Bulunduğunuz yılı girebilir misiniz rica etsem: ");
    scanf("%d", &yil);

    if(yil%100 == 0)
    {
        printf("Bulunuduğunuz yıl artık yıl değildir \n");
    }
    else if(yil%400 == 0)
    {
        printf("Bulunuduğunuz yıl artık yıl değildir \n");
    }
    else if(yil%4 == 0)
    {
        printf("Bulunduğunuz yıl artık yıldır. \n");
    }
    else 
        printf("Bulunuduğunuz yıl artık yıl değildir \n");

    return 0; 
    

}