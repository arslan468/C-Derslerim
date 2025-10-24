#include<stdio.h>
#include <math.h>

int main ()
{
    int h, v, t, x, vs, g=10, vx;

    printf("Yerden yükseklik giriniz: ");
    scanf("%d", &h);

    printf("İlk hızı giriniz: ");
    scanf("%d", &v);

    printf("Yatay hızı giriniz: ");
    scanf("%d", &vx);


    t = (v + sqrt(v*v + 2*g*h)) / g;

    printf("\nCismin havada kalma süresi: %d saniye\n", t);

    x = t*vx;

    printf("\nCismin yatayda alacağı yol: %d metre\n", x);

    vs= sqrt( 2*g*h );

    printf("Cismin yere çarpma hızı: %d",vs);

    return 0;





}