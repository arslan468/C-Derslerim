#include <stdio.h>

void set(int *p) {
    *p = 10;
}

int main() {
    int x = 0;
    set(&x);   // x'in adresi gönderiliyor
    printf("%d\n", x);
    return 0;
}
