#include<stdio.h>

int y = 0;


int normal( int x)
{

}

int pointer(int x)
{

}

int main()
{

    y = 58;
    int *ptr = &y;

    printf("sayının değeri %d\n", y);

    printf("pointer ile sayının değeri %d\n", *ptr);

    *ptr = 119;

    printf("pointer ile değişim yapıldı %d\n", y);










    return 0;
}