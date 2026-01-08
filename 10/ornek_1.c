#include <stdio.h>

int main() {
    int x = 5;        // normal değişken
    int *p = &x;     // pointer

    printf("x  = %d\n", x);
    printf("*p = %d\n", *p);

    *p = 10;          // pointer üzerinden değiştir

    printf("x  = %d\n", x);

    return 0;
}
