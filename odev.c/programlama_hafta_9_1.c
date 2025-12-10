#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main ()
{
    int sayi[8];
    int sayac = 0;
    printf("\n degerimiz %d \n", sayac);

    for (int i = 0; i < 8; i++)
    {
        printf("%d. sayıyı giriniz: ",(i+1));
        scanf("%d", &sayi[i]);
    }
    
    for (int d = 0; d <8; d++)
    {
        printf("%d. sayı: %d\t", (d+1), sayi[d]);
    }

    for (int k = 0; k < 8; k++)
    {
        if (sayi[k]>0)
        {
            printf("\n%d Pozitif bir sayı\n",sayi[k]);
            sayac ++;
        }
        else{
            printf("\n%d Pozitif bir sayı değil\n",sayi[k]);
        }
    }
    printf("\n pozitif sayı adedi: %d \n", sayac);
        
    return 0;
}