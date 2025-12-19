#include<stdio.h>
#include <string.h>

struct araba 
{
    char marka[20];
    char model[20];
    int beygir;
    int yil;
};

void beygir_guncelle(struct araba *gelen);

int main ()
{
    struct araba arac;
    stpcpy(arac.marka, "audi");
    stpcpy(arac.model, "RS");
    arac.beygir = 150;
    arac.yil = 2018;
    printf("Marka: %s\n",arac.marka);
    printf("Model: %s\n",arac.model);
    printf("Beygiri: %d\n",arac.beygir);
    printf("Yıl: %d\n",arac.yil);

    beygir_guncelle(&arac);

    printf("Main den Güncellenmiş beygir: %d\n",arac.beygir);
    return 0;
}

void beygir_guncelle(struct araba *gelen)
{
    gelen->beygir += 78;
    printf("Güncel beygir fonksiyon içinde: %d\n", gelen->beygir);
}