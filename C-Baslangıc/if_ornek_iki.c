#include<stdio.h>

int main()
{
    double ortalama;

    printf("Ortalamanızı giriniz: ");

    scanf("%lf",&ortalama);

    if(ortalama >=85)
        printf("Tebrikler AA ile geçtiniz ortalamanız %f \n",ortalama);
    else if(ortalama>= 70)
        printf("BB ile geçtiniz \n");
    else if (ortalama >=50 ){
        if (ortalama >= 60)
            printf("CB ile geçtiniz\n");
        else 
            printf ("50 60 arası bi not aldınız ve kıl payı geçtiniz.\n");
    }
    else
        printf("Kaldınız. \n");

    return 0;
    
}