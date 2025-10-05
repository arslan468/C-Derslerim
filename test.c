#include<stdio.h> //standart input output kütüphanesi ekleniyor 

int main() { //programın başlangıç noktası
    
    //değişken tanımlama
    int sayi1, sayi2, toplam, carpim, mod, fark; //tam sayı veri tipi tanımlama
    float bolum; //ondalıklı sayı veri tipi tanımlama

    //Kullanıcıdan iki sayı alma 
    printf("Lütfen iki sayı giriniz: "); //ekrana yazdırma fonksiyonu
    scanf("%d %d", &sayi1, &sayi2); //kullanıcıdan veri alma fonksiyonu
    
    toplam = sayi1 + sayi2; //toplama işlemi
    carpim = sayi1 * sayi2; //çarpma işlemi
    fark = sayi1 - sayi2; //çıkarma işlemi
    bolum = (float)sayi1 / sayi2; //bölme işlemi
    mod = sayi1 % sayi2; //mod alma işlemi  
    

    return 0;       //programın sonlanması
}               