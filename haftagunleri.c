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
            printf("Günlerden Pazartesi iyi haftalar dilerim.  ");
            break;
        case '2':
            printf("Günlerden Salı iyi günler dilerim. ");
            break;
        case '3':
            printf("Günlerden Çarşamba iyi günler dilerim. ");
            break;
        case '4':
            printf("Günlerden Perşembe iyi günler dilerim. \n ");
            break;
        case '5':
            printf("Günlerden Cuma iyi günler dilerim. \n ");
            break;
        case '6':
            printf("Günlerden Cumartesi iyi günler dilerim. \n ");
            break;
        case '7':
            printf("Günlerden Pazar iyi günler dilerim. \n ");
            break;
        case '0':
            printf("Görüşmek üzere. \n" );
            deger = 0;
            break;
        default:
            printf("Sıfır veya Haftanın günlerini temsil eden bir sayı girmediniz lütfen doğru tuşlama yapınız. \n ");
            
        }
    }
    

}