#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int veri;
    printf("Yaşınızı giriniz: ");
    scanf("%d", &veri);

    if(veri >= 18)
        cout<<"Hello";
        //printf("Ehliyet alabilirsiniz.");
    else
        printf("18 Yaşından önce ehliyet alamazsınız.");
    
    return 0;
}