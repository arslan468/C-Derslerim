#include<stdio.h>

int main ()
{
    int deger = 1;
    char gun;



    while (deger == 1)
    {
        printf (" \n 1 ile 7 arasında bulunduğunuz günü girebilir misiniz: ");
        scanf(" %c", &gun);

        switch (gun)
        {
        case '1':
            printf("\r Günlerden Pazartesi iyi haftalar dilerim.  ");
            break;
        case '2':
            printf("\r Günlerden Salı iyi günler dilerim. ");
            break;
        case '3':
            printf("\r Günlerden Çarşamba iyi günler dilerim. ");
            break;
        case '4':
            printf("\r Günlerden Perşembe iyi günler dilerim. \n ");
            break;
        case '5':
            printf("\r Günlerden Cuma iyi günler dilerim. \n ");
            break;
        case '6':
            printf("\r Günlerden Cumartesi iyi günler dilerim. \n ");
            break;
        case '7':
            printf("\r Günlerden Pazar iyi günler dilerim. \n ");
            break;
        case '0':
            printf("\r Görüşmek üzere. \n" );
            deger = 0;
            break;
        default:
            printf("\r Sıfır veya Haftanın günlerini temsil eden bir sayı girmediniz lütfen doğru tuşlama yapınız. \n ");
            
        }
    }
    

}