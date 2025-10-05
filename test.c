#include<stdio.h> //standart input output kütüphanesi ekleniyor 

int main() { //programın başlangıç noktası
    
    //değişken tanımlama
    int sayi1, sayi2, toplam, carpim, mod, fark; //tam sayı veri tipi tanımlama
    float bolum; //ondalıklı sayı veri tipi tanımlama

    //Kullanıcıdan iki sayı alma 
    printf("Lutfen iki sayi giriniz: "); //ekrana yazdırma fonksiyonu
    scanf("%d %d", &sayi1, &sayi2); //kullanıcıdan veri alma fonksiyonu
    
    toplam = sayi1 + sayi2; //toplama işlemi
    carpim = sayi1 * sayi2; //çarpma işlemi
    fark = sayi1 - sayi2; //çıkarma işlemi
    bolum = (float)sayi1 / sayi2; //bölme işlemi float ile küsüratlı sonuç için
    mod = sayi1 % sayi2; //mod alma işlemi  

    //Sonuçları ekrana yazdırma
    printf("Toplam: %d\n", toplam);
    printf("Çarpım: %d\n", carpim);
    printf("Fark: %d\n", fark);     
    printf("Bölüm: %.2f\n", bolum); //%.2f ile virgülden sonra 2 basamak gösterme
    printf("Mod: %d\n", mod);
    

    return 0;       //programın sonlanması
}               