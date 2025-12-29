#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int devam = 0,durum = 1;
    while (devam != 1)
    {   
        int rasgele = (random() % 100) + 1;
        printf("\n\n\tGelen sayı %d\n\n",rasgele);
        while (1)
        {
            printf("Çıkmak için 1 e basınız devam etmek için her hangi bir tam sayı giriniz ");
            durum = scanf(" %d", &devam);

            if( durum == 1)
            {
                break;
            }
            else
            {
                printf("\n\n\n===Hatalı giriş yaptınız===\n\n\n");
                while (getchar() != '\n');
            }
        }
        
    }

    return 0;
        
}