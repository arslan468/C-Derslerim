#include<stdio.h>

int main ()
{
    int yaricap, alan, hacim, pi = 3;

    printf("Yarıçap giriniz: \n");
    scanf("%d", &yaricap);

    alan = 4 * pi * yaricap * yaricap;

    hacim = (4 * pi * yaricap * yaricap * yaricap)/3;
    
    printf("Alan:%d \n ", alan);
    printf("Hacim: %d \n", hacim);

    return 0;
    
    

}