#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
 
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
    int deger = 3;
    float birincisayi = 2.4, ikincisayi = 9.2;
    char harf = 'a';
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
    
    return 0;
}

//kullanımını denemek için yaptım ancak main in altında olmasını kullanışsız bulduğum için burda daha fazla kullanmadım
float toplama(float birincideger, float ikincideger){return (birincideger + ikincideger);}