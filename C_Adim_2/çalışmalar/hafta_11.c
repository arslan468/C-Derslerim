#include<stdio.h>
#include<unistd.h>
#include<string.h>

void selamlama();

int power_iterative(int taban, int us);

int power_recursive(int taban, int us);

inline int mutlak_deger(int x);

void veda_hutbesi();

int main ()
{
    int alt, ussu;
    selamlama();
    printf("\t\tTaban değerini giriniz: ");
    scanf(" %d", &alt);
    printf("\t\tÜs değerini giriniz: ");
    scanf(" %d", &ussu);
    if (ussu < 0 )
    {
        printf("\n\n\t!!!---NEGATİF DEĞER GİREMEZSİNİZ---!!!");
    }
    else
    {
        printf("\n\n\tİTERATİVE Sonuç: %d\n\n\t", power_iterative(alt, ussu));
        printf("\n\n\tRECURSİVE Sonuç: %d\n\n\t", power_recursive(alt, ussu));
    }

    veda_hutbesi();
    return 0;


}

int power_iterative(int taban, int us)
{
    if (us == 0)
    {
        return 1;
    }
    
    int sonuc = 1;
    for (int i = 1; i <= us; i++)
    {
        sonuc = taban * sonuc;
    }
    return sonuc;
}

int power_recursive(int taban, int us)
{
    if (us == 0)
    {
        return 1;
    }
    

    return taban * power_iterative(taban, (us-1));
}

inline int mutlak_deger(int x)
{
    return (x < 0) ? -x : x;
}

void selamlama()
{
    printf("\n\n\n\t===HOŞGELDİNİZ PROGRAM BAŞLIYOR ===\n\n\n");
}

void veda_hutbesi()
{
    printf("\n\n\n\t===GÖRÜŞMEK ÜZERE YİNE BEKLERİZ👋👋👋===\n\n\n");
}