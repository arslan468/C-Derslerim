#include <stdio.h>

int main (void) {
    int sayi1, sayi2;
    printf("İlk sayıyı giriniz: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);

    if (sayi1 > sayi2)
        printf("Büyük sayı =>%d" , sayi1);
    else if (sayi2>sayi1)
    {
        printf("Büyük sayı =>%d", sayi2);
    }
    
    else
        printf("Sayılar birbirine eşittir.");
    return 0;
    
}