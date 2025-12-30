/*
Proje 2: "Veriyle Dans" - Sezar Şifreleme ve Matris Matik
Amaç: Dizilerle (arrays) ve metinlerle (strings) oynamayı öğrenmek. Veriyi peş peşe dizip işlemeyi kavramak.

Kapsadığı Konular:

Hafta 6 (Tek Boyutlu Diziler, Çok Boyutlu Diziler/Matrisler, Stringler)

Ne Yapacaksın?

Sezar Şifresi: Kullanıcıdan bir kelime (string) al. Bir de "kaydırma miktarı" (mesela 3) al. 
Her harfi alfabede 3 sıra kaydırarak şifreli metni ekrana bas. (Örn: 'A' -> 'D', 'B' -> 'E'). Stringi karakter dizisi olarak ele alıp döngüyle gezeceksin.

Matris Toplama: İki tane 3x3'lük matris (iki boyutlu dizi) tanımla, içlerini rastgele sayılarla doldur.
 Sonra bu iki matrisi toplayıp üçüncü bir matrise yazan ve ekrana basan bir kod yaz.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int sezar(int x);

int main()
{
    selamlama();


    veda();
    return 0;
}

