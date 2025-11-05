#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main ()
{
    char sbt[30] = "" ,denek[30] = "giris";
    char exit, sabit_sifre[30]="Giris123",alinan_sifre[30]=" ";
    int d = strlen(sabit_sifre);
    printf("%d",d);


    printf("Lütfen Şifrenizi giriniz: ");
    scanf(" %s", &sbt);




        
    int flg=0;
    for(int i = 0; i < strlen(denek); i++)
    {
        printf("\nilk for\n");
        for(int j=0; j<strlen(denek); j++)
        {
            printf("\nikinci for\n");
            if(sbt[i] == denek[j])
            {
                flg += 1;
                printf("\nburaya girdi \ni değişkeni: %d \n j değişkeni:  %d\nflg değişkeni:  %d\n",i ,j , flg);
                break;
            }
        }
    }



    /*

    for (int i = 0; i < strlen(denek); i++)
    {
        printf("\n%d. Eleman ---->    %c\n",i, denek[i]);



        if (1)
        {
            
        }
        

    }
    


    
    scanf(" %s", sbt);

    printf("%s", sbt);

    if (strcmp(sbt,denek) == 0)
    {
        int goruntu = strcmp(sbt, denek);

        printf("\nİşlem başarılı %d", goruntu);
    }
    
    int goruntu = strcmp(sbt, denek);

    printf("\nİşlem başarılı %d", goruntu);

*/

    return 0;


}