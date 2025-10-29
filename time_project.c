#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main ()
{

    int zaman;

    printf("Kaçtan geriye doğru sayım yapılsın isteriniz: ");
    scanf("%d", &zaman);

    printf("Vaayyyy çok güzel sayı o zaman geri sayım başlasın \n");

    while (zaman >= 0)
    {
        printf("\r Kalan süre %2d saniye ", zaman);

        fflush(stdout);
        sleep(1);
        zaman--;
    }

    printf("\n \n SÜRE DOLDUUUUU \n");

    return 0;
    
































    time_t anlik;

    anlik = time(NULL);

    printf("%s", ctime(&anlik));


}