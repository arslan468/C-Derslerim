#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h>


int main ()
{
    /*
    int matris[2][3]=
    {
        {10,20,30},
        {111,222,333}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d. satırın %d. sütununda ki değer = %d\n",(i+1), (j+1), matris[i][j]);
        }
    }

    */

    int satir,sutun;
    printf("İlk olarak satır sayısını giriniz Ardından sütun sayısını giriniz: ");
    scanf(" %d %d", &satir , &sutun);
    int esnek_matris[satir][sutun];

    printf("Toplam da %d adet değer girebilirsiniz.", (satir*sutun));

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j< sutun; j++)
        {
            printf("\n\n\t[%d]. satırın [%d]. sütununda ki değeri giriniz: ", (i+1), (j+1));
            scanf(" %d", &esnek_matris[i][j]);
        }
    }

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("\n\n\t[%d]. satırın [%d]. sütununda ki değer = %d ", (i+1), (j+1), esnek_matris[i][j]);
        }
    }

    return 0;
}