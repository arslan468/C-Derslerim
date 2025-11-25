#include <stdio.h>
#include <string.h>

int main ()
{



    char ingiliz[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("%d", strlen(ingiliz));

    printf("\n...\n");

    printf("%d", sizeof(ingiliz));

    char turk[58] = "ABCDEFGHIİJKLMNOÖPRSŞTUÜVYZ";

    printf("%d", strlen(turk));

    printf("%d", sizeof(turk)); 

    printf("\n...\n");

    return 0;

}