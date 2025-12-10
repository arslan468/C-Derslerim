#include<stdio.h>

int main (void)
{
    int a ;
    double b,sonuc;
    char c;





    printf("Bir sayı giriniz: ");
    scanf("%d", &a);
    printf("Bir ondalıklı sayı giriniz: ");
    scanf("%lf", &b);
    getchar();
    printf("\nBir karakter giriniz:");
    scanf("%c ", &c);
    int ascii = (int)c;
    sonuc = (a+b)*ascii;

    printf("Sonuç:  %lf\n",sonuc );


    return 0;

}