#include<stdio.h>

int main (){

    int sayi,b=0,c=1,terim;

    printf("Terim sayısı giriniz: ");
    scanf("%d", &sayi);

    for (int i = 0; i <= sayi; i++)
    {
        printf("%d,", b);
        terim =  b + c;
        b = c;
        c = terim;
        
    }

    printf("\n---------------------------------       GÖRÜŞMEK ÜZERE👋      ---------------------------------\n");
    

}