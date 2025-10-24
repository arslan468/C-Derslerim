#include <stdio.h>      

int main ()
{
    float cevre, alan, boy, en;

    printf("Dikdörtgenin boyunu giriniz: " );
    scanf("%f", &boy);

    printf("Dikdörtgenin enini giriniz: ");
    scanf("%f", &en);

    cevre = 2 * (boy +en);
    alan = boy * en;
    
    printf("Dikdörtgenin çevresi = %2.f birimdir \n", cevre);
    printf("Dikdörtgenin alanı = %2.f birimdir \n", alan);
    return 0;

}