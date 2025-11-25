#include<stdio.h> 

int main(void){
    float vize, fnl, ortl;
    
    printf("Vize notunuz giriniz: %f\n ", vize);
    
    printf("Final notunu giriniz: %f\n ", fnl);
    
    //ortl = vize*0.4 + fnl*0.6;
    ortl = 33.2;
    if (ortl >= 45)
    {
        printf("%.4f ortalama ile geçtiniz tebrikler.", ortl);
    }
    else {
        printf("%.6f ortalama ile kaldınız. ", ortl);
    }
    
    return 0;
}