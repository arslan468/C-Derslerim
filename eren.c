#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int number;
    printf("Sayi giriniz: ");
    int adet = 0;
    scanf("%d", &number);

    for (int i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            adet++;
        }
        
    }
    printf("%d", adet);
    if (adet > 2)
    {
        printf("Girdiginiz sayi asal degil");
    } else {
        printf("Girdiginiz sayi asal");
    }
     
    
    return 0;
}