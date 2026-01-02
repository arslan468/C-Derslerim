/* Yapay zeka çalışma soruları
Proje 3: "Beyin Yakan Kısım" - Recursive (Özyinelemeli) Matematikçiler

**Amaç:** Fonksiyonları derinlemesine öğrenmek ve şu meşhur "kendi kendini çağıran fonksiyon" (recursion) mantığını çözmek.

* **Kapsadığı Konular:**
* Hafta 7 (Fonksiyonlar, Parametreler, Return değerleri)
* Hafta 8 (Recursion - Özyineleme)


* **Ne Yapacaksın?**
1. **Faktöriyel Yarışı:** Kullanıcıdan bir sayı al. Bu sayının faktöriyelini hesaplayan İKİ farklı fonksiyon yaz.
* Birinci fonksiyon normal `for` döngüsü kullansın (**Iterative**).
* İkinci fonksiyon kendi kendini çağırsın (**Recursive**).


2. **Fibonacci Dizisi:** Yine recursive mantıkla, kullanıcının istediği sıradaki Fibonacci sayısını bulan fonksiyonu yaz. (Hoca bunu kesin sormuştur, iyi çalış).
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


void faktoriyel(int x);

int recursive_faktoriyel(int x);




int main ()
{
    selamlama();
    printf("Faktöriyeli alınmasını istediğiniz sayıyı giriniz: ");

    int deger,recurisve_sonuc;
    scanf(" %d", &deger);
    
    faktoriyel(deger);
    recurisve_sonuc = recursive_faktoriyel(deger);
    printf("\n\nRecursive fonksiyon ile faktöriyelin sonucu: %d",recurisve_sonuc);


    veda();
    return 0;
}
    
int recursive_faktoriyel(int x)
{
    if (x <= 1)
    {
        return 1;
    }

    return x * recursive_faktoriyel(x-1);
}

void faktoriyel(int x)
{
    int sonuc = 1;

    for (int i = x; i > 0; i--)
    {
        sonuc = sonuc * i;
    }

    printf("\n\nNormal fonksiyon ile faktöriyelin sonucu: %d", sonuc);
}






















