#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int no;
    float ort;
} Ogrenci;


Ogrenci* ogrenci_olustur(int no, float ort) {
    Ogrenci *p = malloc(sizeof *p);
    if (!p) return NULL;

    p->no  = no;
    p->ort = ort;
    return p;
}

void ogrenci_yaz(const Ogrenci *o) {
    printf("No: %d  Ortalama: %.2f\n", o->no, o->ort);
}

void yaz(Ogrenci aa){
	
	printf("No: %d  Ortalama: %.2f\n", aa.no, aa.ort);
	
}
int main() {

   
    Ogrenci a;          // STACK
    a.no = 1;
    a.ort = 3.20;
	
	yaz(a);
    ogrenci_yaz(&a);    // adres gönderildi → ->

    
    Ogrenci *b = ogrenci_olustur(2, 2.85);  // HEAP
    if (!b) return 1;

    ogrenci_yaz(b);
    free(b);

    return 0;
}
