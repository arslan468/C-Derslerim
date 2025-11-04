#include<stdio.h>

int main (){

    int sayi,kontrol=0, sayac=0;

    printf("Bir adet pozitif tam sayı giriniz: ");
    scanf("%d",&sayi);

    for (int i = 0; i <= sayi; i++)
    { 
        kontrol = sayi % i;
        if (kontrol == 0)
        {
            sayac++;
        }

    }

    if (sayac>2)
    {
        printf("Sayınız Asal değil");
    }
    else
        printf("Sayınız asal");    

    printf("---------------------------------       GÖRÜŞMEK ÜZERE👋      ---------------------------------");

    return 0;
}