#include<stdio.h>
#include<unistd.h>
#include<string.h>

float bakiye = 1000;
int menu;
float islem; 

void menuGoster(){

    printf("===BANKAMATİK===\n\n1.Bakiye Sorgula\n\n2.Para Yatır\n\n3.Para Çek\n\n4.Çıkış\n\n");
}

float bakiyeSorgula(float bakiye)
{   
    printf("HESABINIZDA BULUNAN BAKİYE MİKTARI: %.2f\n", bakiye);

}

float paraYatir(float baska){
    float donut = bakiye + baska;
    return donut;
}

float paraCek(float gelen){
    float deger = bakiye - gelen;
    return deger;

}

int main (){

    while (menu != 4)
    {
        menuGoster();
        scanf(" %d", &menu);
        
        if (menu>0)
        {   
            switch (menu)
            {
            case 1:
                bakiyeSorgula(bakiye);
                break;
            case 2:
                printf("YATIRMAK İSTEDİĞİNİZ TUTARI GİRİNİZ: ");
                scanf("%f",&islem);
                bakiye = paraYatir(islem);
                printf("Mevcut Bakiye: %.2f\n", bakiye);
                break;
            case 3:
                printf("ÇEKMEK İSTEDİĞİNİZ TUTARI GİRİNİZ: ");
                scanf("%f",&islem);
                if (islem <= bakiye )
                {         
                    bakiye = paraCek(islem);
                    printf("Kalan Bakiyeniz: %.2f\n", bakiye);
                }
                else{
                    printf("Bakiyenizden fazla miktarda para çekemezsiniz!!!\n\n");
                }
                break;

            case 4:
                printf("===ÇIKIŞ YAPILIYOR===\n\n");
                break;

            default:
                printf("!!!HATALI TUŞLAMA YAPTINIZ!!!\n\n");
                menu = 1;
                break;
            }
        }
        else{
            printf("Pozitif değer giriniz\n");
        }

    }
    menuGoster();
    return 0;
}