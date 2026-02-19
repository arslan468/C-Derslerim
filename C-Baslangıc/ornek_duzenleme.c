#include<unistd.h>
#include<stdio.h>
#include<time.h>

int main ()
{
    int number1, number2; 
    printf("\nBirinci Sayıyı giriniz: ");
    scanf("%d", &number1);

    printf("\nİkinci Sayıyı giriniz: ");
    scanf("%d", &number2);

    printf("\n1.Toplam = %d\n", (number1+number2));
    printf("\n2.Farkı = %d\n", (number1-number2));
    printf("\n3.Çarpım = %d\n", (number1*number2));
    printf("\n4.Bölümü = %d\n", (number1/number2));
    printf("\n5.Mod Alma = %d\n", (number1%number2));
    printf("\n1.Toplam = %d\n", (number1+number2));
    printf("\n1.Toplam = %d\n", (number1+number2));
    (number1 < number2) ? printf("Büyük sayı: ") : printf("Büyük sayı ");







    return 0; 


}