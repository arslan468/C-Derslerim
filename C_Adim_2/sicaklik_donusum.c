#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int c_to_f(int x);
int f_to_c(int y);
void baslangic();

int main()
{
    int derece = 0;
    char tur = 'a';
    
    baslangic();
    printf("\n\n\tSeçiminizi giriniz: ");
    scanf(" %c", &tur);
    switch (tur)
    {
    case 'c':
        printf("\n\n\tSıcaklığı Fahrenheit değerinde giriniz: ");
        scanf(" %d", &derece);
        printf("\n\n\tCelsius değeri: %d\n",f_to_c(derece));
        break;

    case 'f':
        printf("\n\n\tSıcaklığı Celsius değerinde giriniz: ");
        scanf(" %d",&derece);
        printf("\n\n\tFahrenheit değeri: %d\n",c_to_f(derece));
        break;
    
    default:
        printf("===!!!HATALI TUŞLAMA YAPTINIZ!!!===");
        break;
    }


}

void baslangic()
{
    printf("\n\n\n\t===HOŞGELDİNİZ PROGRAM BAŞLIYOR===\n\n\n");
    printf("\n\tFahrenheit ==> Celsius için ==> c\n");
    printf("\n\tCelsius ==> Fahrenheit için ==> f\n");
}

int f_to_c(int y)
{
    return ((y-32)*5/9);
}

int c_to_f(int x)
{
    return (x*9/5 + 32);
}