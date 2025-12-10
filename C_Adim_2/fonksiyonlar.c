#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>




//pass by value
int bes_ekle(int a){
    //printf("%d\n",a);
    a = a + 5;
    return a;
}


void merhaba(){
    printf("===HOŞGELDİNİZ PROGRAM BAŞLIYOR===\n");
}

float carpma(float sonuc, float gelen){
    printf("Sonuç = %.2f\nGelen = %.2f\n", sonuc, gelen);
    return (sonuc*gelen);
}

float toplama(float birincideger, float ikincideger);


//pass by referance 

int main (){
    merhaba();
    int deger = 3;
    float birincisayi = 2.4, ikincisayi = 3.2;
    char harf = 'a';
    //bes_ekle(deger);
    //printf("beş eklenmiş hali %d\n", bes_ekle(deger));
    //printf("çarpma %.2f\n", carpma(birincisayi, ikincisayi));
    //printf("toplama fonksiyonu deneme %.2f\n", toplama(deger, ikincisayi));


    return 0;
}


float toplama(float birincideger, float ikincideger){
    return (birincideger + ikincideger);

}
