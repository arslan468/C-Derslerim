#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377

//Özyinelemeli fonksiyon kendi kendisini çağıran fonksiyon 

void selamlama();

int faktoriyel(int x);

int recursive_faktoriyel(int y);

int recursive_fibonacci(int x);

float us_alma(float taban, int us);



int main ()
{
    selamlama();
    int sayi = 9, us = 5;
    float ilkdeger = 2.00;
    
    
    printf("\n\n\t\tÇIKTI = %.2f\n\n\n", us_alma(ilkdeger, us));  // üs alma fonksiyonunu çağırır 

    //printf("\n\n\t\tFİBONACCİ DİZİSİ = %d\n\n\n", recursive_fibonacci(sayi));  // recursive fibonacci fonksiyonunu çağırır 
    //printf("\n\n\t\tÇIKTI = %d\n\n\n",recursive_faktoriyel(sayi)); // recursive fakttöriyel fonksiyonunu çağırır 
    //printf("\n\n\nÇIKTI = %d\n\n\n",faktoriyel(sayi)); // normal faktöriyel fonksiyonu çağırır 
}


void selamlama()
{
    printf("\n\n\n\t===HOŞGELDİNİZ PROGRAM BAŞLIYOR===\n\n\n");
}

int faktoriyel(int x)
{
    int deger = 1, i = x;
    for ( ; i > 0 ; i--)
    {
        deger = deger * i;
    }
    return deger;
}

int recursive_faktoriyel(int y)
{
    if(y <= 1)
    {
        return 1;
    }
    return  y * recursive_faktoriyel(y-1);
}

int recursive_fibonacci(int x)
{
    if(x<=2)
    {
        return 1;
    }
    return recursive_fibonacci(x-1) + recursive_fibonacci(x-2);
}

float us_alma(float taban, int us)
{
    float sonuc = 1;
    if(us<0)
    {
        for (int i = 0; i < - us; i++)
        {
            sonuc *= 1/taban;
        }
    }
    
    else
    {
        for (int d = 0; d < us; d++)
        {
            sonuc *= taban;
        }
    }
    return sonuc;
}