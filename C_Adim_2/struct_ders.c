#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct yasamim {
    int kalinanyil;
    /*char sehir[33];
    char belediye[30];
    float puanım;*/
};

struct deneme
{
    int sayi;

    

};


int main()
{

    

    int sayi,sayac, deger;

    printf("Kaç farklı şehir de yaşadınız: ");
    scanf(" %d", &sayi);
    deger = sayi--;
    struct yasamim id[deger];

    for (int i = 0; i < deger; i++)
    {
        printf("Yaşadığınız yılı giriniz: ");
        scanf(" %d", &id[i].kalinanyil);
    }
    for (int d = 0; d< deger; d++)
    {
        
        
        printf("%d. şehirde kaldığınız yıl %d\n", (d+1), id[d].kalinanyil);
    }
    
    





    /*
    id[0].kalinanyil = 2;
    id[0].puanım = 3.21;
    strcpy(id[0].sehir, "Trabzon");
    strcpy(id[0].belediye, "Of");
    printf("%s şehrinin %s belediyesinde \n%d yıldır kalıyorum ve tüm bu deneyimlerim sonucunda verdiğim puanım %.2f\n",id[0].sehir, id[0].belediye, id[0].kalinanyil,id[0].puanım);

    printf("Yaşadığın şehir: ");
    scanf(" %s",&id[1].sehir);
    
    printf("Yaşadığın belediye: ");
    scanf(" %s",&id[1].belediye);

    printf("%s şehrinin %s belediyesinde kaç yıldır kalıyorsun ?  \t", id[1].sehir, id[1].belediye);
    scanf("%d",&id[1].kalinanyil);

    printf(" %s şehrine puanın kaç: ", id[1].sehir);
    scanf(" %f",&id[1].puanım);

    printf("%s şehrinin %s belediyesinde\t%d yıldır kalıyorum ve tüm bu deneyimlerim sonucunda verdiğim puanım %.2f\n",id[1].sehir, id[1].belediye, id[1].kalinanyil,id[1].puanım);
    */

    
    return 0;
}