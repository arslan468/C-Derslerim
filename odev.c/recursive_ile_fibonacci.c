/* Yapay zeka çalışma soruları
Proje 3: "Beyin Yakan Kısım" - Recursive (Özyinelemeli) Matematikçiler

**Amaç:** Fonksiyonları derinlemesine öğrenmek ve şu meşhur "kendi kendini çağıran fonksiyon" (recursion) mantığını çözmek.

* **Kapsadığı Konular:**
* Hafta 7 (Fonksiyonlar, Parametreler, Return değerleri)
* Hafta 8 (Recursion - Özyineleme)

2. **Fibonacci Dizisi:** Yine recursive mantıkla, kullanıcının istediği sıradaki Fibonacci sayısını bulan fonksiyonu yaz. (Hoca bunu kesin sormuştur, iyi çalış).
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int recursive_fibonacci(int x);


int main()
{
    int deger, sonuc;
    selamlama();
    printf("Fibonacci dizisinde ki kaçıncı adımı bulmak istersiniz: ");
    scanf(" %d", &deger);
    sonuc = recursive_fibonacci(deger);
    printf("\n\nFibonacci dizisinin %d. değeri = %d", deger,sonuc);
    veda();
    return 0;
}

int recursive_fibonacci(int x)
{
    if (x <= 2)
    {
        return 1;
    }
    return  recursive_fibonacci(x-1) + recursive_fibonacci(x-2);
}