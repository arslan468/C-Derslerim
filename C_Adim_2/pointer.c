#include <stdio.h>

int main() {
    int sayi = 50;      // Normal bir değişken. Değeri 50.
    int *ptr;           // Bir pointer tanımladık (henüz boş).

    ptr = &sayi;        // DİKKAT: 'sayi'nin adresini 'ptr'ye atadık.
                        // Artık ptr, sayi'nin nerede olduğunu biliyor.

    printf("Sayinin degeri: %d\n", sayi);     // Çıktı: 50
    printf("Pointer ile erisim: %d\n", *ptr); // Çıktı: 50 (*ptr -> adrese git, değeri oku)

    // Şimdi pointer üzerinden değeri değiştirelim
    *ptr = 100;         // "Adrese git, oraya 100 yaz" dedik.
    
    printf("Sayinin yeni degeri: %d\n", sayi); // Çıktı: 100 (Orijinal değişken değişti!)
    
    return 0;
}