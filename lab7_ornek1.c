#include<stdio.h>

int main()
{
    int a=1,b;

    printf("\n --------------------------- Merhaba Hoşgeldiniz Şov Başlıyorrrr 🥳 -------------------------------\n ");
    printf("\n1\n");

    while (a<100)
    {
        a++;
        b = a%3;
        if (b == 0 )
        {
            continue;   
        }
        else
        {
            printf("\n %d \n",a);
        }
        

    }

    printf("\n---------------------------------       GÖRÜŞMEK ÜZERE👋      ---------------------------------\n");
    return 0;
}