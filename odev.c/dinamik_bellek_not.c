#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <stdlib.h>

float not_ortalama(int *adres , int boyut );
float not_ekle(int *dizi , int sira ,int not);

int main()
{
    int *ptr, n,deger;
    printf("Kaç adet not giriceksiniz: ");
    scanf(" %d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("====HATA====");
        return 1;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        printf("\n%d. elemanı giriniz: ",(i+1));
        scanf(" %d", &deger);
        not_ekle(ptr,i, deger);
    }
    float ort = not_ortalama(ptr, n);
    printf("Ortalama: %.2f", ort);


    free(ptr);
    return 0;
}

float not_ortalama(int *adresi, int boyut)
{

    float toplam = 0;
    for (int i = 0; i < boyut; i++)
    {
        toplam += adresi[i];
    }
    return toplam/boyut;
}

float not_ekle(int *dizi,int sira, int not)
{
    static int girilen_toplam_not= 0;
    dizi[sira]= not;
    girilen_toplam_not += 1;
    printf("%d adet not sisteme işlendi son girilen değer = %d\n", girilen_toplam_not, not);
}