#include<stdio.h>


int main (){
    int dizi[] = {13, 3, 2, 5,2};
    int lengths = sizeof(dizi) / sizeof(dizi[0]);





    dizi[++lengths] = 45;
    
    printf("%d", lengths);

    
    return 0;
}


