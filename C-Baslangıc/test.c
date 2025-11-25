#include<stdio.h> //standart input output kütüphanesi ekleniyor 

int main() { //programın başlangıç noktası
    
    //değişken tanımlama
    int sayi1, sayi2, toplam, carpim, mod, fark; //tam sayı veri tipi tanımlama
    float bolum; //ondalıklı sayı veri tipi tanımlama
    int i = 3; 
    
    //printf(" i değişkeni : %d\n", i);

    i += 4;
    //printf("+4 işlemi yapıldı : %d\n ", i);

    i -= 2;
    //printf("-2 işlemi yapıldı  : %d\n", i);


    i *= 5;
    //printf("Çarpı 5 işlemi yapıldı : %d\n ", i);

    i +=1;
    double veri_tipi_double = (double) i/9;
    printf(" 9'a böldüm : %.52f\n", veri_tipi_double);





    //Kullanıcıdan iki sayı alma 
    //printf("Lutfen iki sayi giriniz: "); //ekrana yazdırma fonksiyonu
    //scanf("%d %d", &sayi1, &sayi2); //kullanıcıdan veri alma fonksiyonu
    
    toplam = sayi1 + sayi2; //toplama işlemi
    carpim = sayi1 * sayi2; //çarpma işlemi
    fark = sayi1 - sayi2; //çıkarma işlemi
    bolum = (float)sayi1 / sayi2; //bölme işlemi float ile küsüratlı sonuç için
    mod = sayi1 % sayi2; //mod alma işlemi  

    //Sonuçları ekrana yazdırma
    //printf("Toplam: %d\n", toplam);
    //printf("Çarpım: %d\n", carpim);
    //printf("Fark: %d\n", fark);     
    //printf("Bölüm: %.2f\n", bolum);
    //printf("Mod: %d\n", mod);
    return 0;       //programın sonlanması.    clang test.c -o main.      ./main
}