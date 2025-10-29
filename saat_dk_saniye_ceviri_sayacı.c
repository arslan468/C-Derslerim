#include<unistd.h>
#include<stdio.h>
#include<time.h>

int main ()
{
    int saat, dk, saniye, toplam_saniye;

    printf("--- GERİ SAYIM AYARLAMA ---\n");

    printf("\rSaat giriniz (Yok ise '0' giriniz.): ");
    scanf("%d", &saat);

    printf("\rDakika giriniz (Yok ise '0' giriniz.): ");
    scanf("%d", &dk);

    printf("\rSaniye giriniz (Yok ise '0' giriniz.): ");
    scanf("%d", &saniye);

    toplam_saniye = (saat * 3600) + (dk * 60) + (saniye);

    if(toplam_saniye <= 0)
        {
            printf("Sayaç için geçerli bir değer girmediniz program kapanıyo bayss");
            sleep(1);
            return 1;
        }
    
    while (toplam_saniye >= 0)
    {
        printf("\r Sayacınızın bitmesine kalan son %d saniye  ", toplam_saniye);
        toplam_saniye--;
        fflush(stdout);
        sleep(1);

    }

    printf("------------------------ SAYAÇ BİTTİ ------------------------\n");

    printf("Program Tarihi: ");

    return 0;
    


    
}