#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include"headers/new_maths.h"

float birincisayi = 2.4, ikincisayi = 9.2;
 
//pass by value -> değişken üzerinde değişiklik yapmaz sadece değeri alır 
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

void statik_degisken()
{
    static int dongu_sayisi = 0; //yalnızca fonksiyon ilk çağrıldığında değer atanır daha sonra o değeri hafıza da tutar 
    dongu_sayisi += 1;
    printf("BU FONKSİYON %d KEZ ÇAĞRILDI\n\n\n",dongu_sayisi);
}

//pass by referance verinin geldiği değişkende değişiklik yapar
float cikarma(float *gelenbir, float *geleniki){
   float *sonuc;
    if ((*gelenbir)>=(*geleniki))
    {
        *sonuc = ((*gelenbir)-(*geleniki));
        return *sonuc;
    }
    
    return ((*geleniki)-(*gelenbir));
}

int dort_ekle(int *dort){
    (*dort) += 4;
    return *dort;
}

int main ()
{
    merhaba();
    int deger = 9, yuz_bes = 105 ;
    char harf = 'a';

    printf("\nKare alma fonksiyonu sonucu %.2f\n",maths_kare_alma(birincisayi));

   printf("\nMod alma fonksiyonu sonucu %d\n",maths_mod_alma(yuz_bes,deger));

    /*
    printf("scope dışındayız = %d\n", deger);//şuan main de ilk tanımlanan değişkeni görüyor
     {//scope(kapsam) kullanımı  herhangi bir fonksiyon içinde bu şekilde kullanılabilir burda kullanılan değişken scope dışında tanınmaz
        int deger = 0;
        printf("scope içindeyiz %d\n", deger);
        deger ++;
        printf("scope içindeyiz değeri bir arttırdık %d\n", deger);
    }
    printf("scope dışındayız = %d\n", deger);//şuan main de ilk tanımlanan değişkeni görüyor*/

    //bes_ekle(deger);
    //printf("beş eklenmiş hali %d\n", bes_ekle(deger));
    //printf("çarpma %.2f\n", carpma(birincisayi, ikincisayi));
    //printf("toplama fonksiyonu deneme %.2f\n", toplama(deger, ikincisayi));
    //printf("çıkarma fonksiyonu deneme 1 = %.2f\n",cikarma(&ikincisayi,&birincisayi));
    //printf("çıkarma fonksiyonu deneme 2 = %.2f\nfarkları veriyi gönderme sırası farklı burda fonksiyonda ki if'i test ettim\n",cikarma(&birincisayi,&ikincisayi));
    //printf("%.2f\n%.2f\n",birincisayi, ikincisayi);
    //printf("dort ekle fonksiyonuna gitmeden önce ki değeri %d\n",deger);
    //printf("fonksiyondan dönen değer %d\n",dort_ekle(&deger));
    //printf("son durumda ki deger değişkenin değeri = %d\n",deger);

    for (int i = 0; i < 5; i++)
    {
        statik_degisken();//fonksiyonda statik değişken kullanma
    }
    
    return 0;
}

//kullanımını denemek için yaptım ancak main in altında olmasını kullanışsız bulduğum için burda daha fazla kullanmadım
float toplama(float birincideger, float ikincideger){return (birincideger + ikincideger);}