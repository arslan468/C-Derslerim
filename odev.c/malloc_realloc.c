#include<stdio.h>
#include<stdlib.h>

int main ()
{
    printf("\n\n\n\n\n\t\t ================= Merhaba Hoşgeldiniz Şov Başlıyorrrr 🥳 =================\n\n\n ");

    int eleman, yeni, *ptr,i,deger;
    printf("\t\tDizinin eleman sayısını giriniz: ");
    scanf(" %d", &eleman);
    ptr = (int *)malloc(eleman * sizeof(int));
    if (ptr == NULL)
    {
        printf("====HATA====");
        return 1;
    }

    for(i=0; i<eleman; i++)
    {
        printf("\n%d. elemanı giriniz: ",(i+1));
        scanf(" %d", &deger);
        ptr[i] = deger;
    }
    
    for (int d = 0; d < eleman; d++)
    {
        printf("\n%d. eleman %d\n", (d+1), ptr[d]);
    }

    printf("\nKaç adet yeni sayı girmek istersiniz: ");
    scanf(" %d", &yeni);

    ptr = realloc(ptr, yeni * sizeof(int));

    for (; i < (eleman+yeni); i++)
    {
        printf("\n%d. elemanı giriniz: ",(i+1));
        scanf(" %d", &deger);
        ptr[i] = deger;
    }

    for (int d = 0; d < (eleman+yeni); d++)
    {
        printf("\n%d. eleman %d\n", (d+1), ptr[d]);
    }
    free(ptr);

    printf("\n=================    GÖRÜŞMEK ÜZERE👋   =================\n");

    return 0;
}