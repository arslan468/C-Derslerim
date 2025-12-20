#include<stdio.h>
#include <string.h>

struct ogrenci
{
    char isim[30];
    int yas;
    int sinif;
};

int main ()
{
    struct ogrenci bir;
    strcpy(bir.isim, "Alp Arslan");
    bir.yas = 19;
    bir.sinif = 1;
    printf("İsim %s\n", bir.isim);
    printf("Yaş %d\n", bir.yas);
    printf("Sınıf %d\n", bir.sinif);

    return 0;

}