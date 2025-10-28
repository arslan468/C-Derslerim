#include<stdio.h>

int main ()
{
    char operator;
    double firstnumber, secondnumber;

    printf("Yapmak istediğiniz işlemi seçiniz + , - , * , / \n");
    scanf("%c", &operator);

    printf("İki sayı giriniz: ");
    scanf("%lf %lf", &firstnumber ,&secondnumber);

    switch (operator){
        case '+':
            printf("Girmiş olduğunuz %.2lf ve %.2lf sayılarının toplamı %.2lf", firstnumber, secondnumber, firstnumber+secondnumber);
            break;
        case '-':
            printf("Girmiş olduğunuz büyük olan %.2lf ve %.2lf sayılarının farkı %.2lf ", firstnumber, secondnumber, firstnumber-secondnumber);
            break;
        case '*':
            printf("Girmiş olduğunuz  %.2lf ve %.2lf sayılarının çarpımı %.2lf ", firstnumber, secondnumber, firstnumber*secondnumber);
            break;
        case '/':
            printf("Girmiş olduğunuz  %.2lf ve %.2lf sayılarının bölümü %.2lf ", firstnumber, secondnumber, firstnumber/secondnumber);
            break;
    }

    return 0;
    

}