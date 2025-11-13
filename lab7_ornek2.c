#include<stdio.h>

int main ()
{
    int a=10, b=10,k;

    printf("\n --------------------------- Merhaba Hoşgeldiniz Şov Başlıyorrrr 🥳 -------------------------------\n");


    for (int i = 0; i <= a; i++)
    {
        for (int d = 0; d <= i; d++)
        {
            k=i*d;
            printf("%d x %d = %d \t",i,d,k);
        }
        printf("\n");
    }


    printf("\n---------------------------------       GÖRÜŞMEK ÜZERE👋      ------------------------------------\n");

    return 0;




    
}