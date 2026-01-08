#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selam.h"
#include <time.h> 

typedef struct 
{
    char *ad;
    int id; 
}kullanici;

int main()
{
    kullanici pr;
    pr.ad = (char *)malloc(10 * sizeof(char));
    srand(time(NULL));
    strcpy(pr.ad, "alp");
    pr.id = (rand()%100)+1;
    printf("\n%d\n%s", pr.id, pr.ad);
    free(pr.ad);
    
    
}
