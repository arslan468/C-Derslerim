#include <stdio.h>

void set_ptr(int *p) {
    int x = 20;
	printf(" fonksiyon *p = %p\n", (void*)p); // 10 (x'in değeri)
	printf("*p = %d\n", *p); // 10 (x'in değeri)


    *p = x;   //  sadece kopya değişti
	
	printf(" fonksiyon dğişti  *p = %p\n", (void*)p); // 10 (x'in değeri)
	printf("fonksiyon değitri *p = %d\n", *p); // 10 (x'in değeri)
}

int main() {
	
	
int y=10;

    int *p = &y; 
	printf("main *p = %p\n", (void*)p); // 10 (x'in değeri)
    set_ptr(p);
	printf(" main *p = %d\n", *p); // 10 (x'in değeri)
}
