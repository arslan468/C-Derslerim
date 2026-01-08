#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 3;

    // ilk bellek
    arr = malloc(size * sizeof *arr);
    if (!arr) return 1;

    for (int i = 0; i < size; i++)
        arr[i] = i + 1;

    printf("Ilk dizi: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // diziyi büyüt
    int new_size = 5;
    int *tmp = realloc(arr, new_size * sizeof *arr);
    if (!tmp) {
        free(arr);
        return 1;
    }
    arr = tmp;

    // yeni elemanlari doldur
    for (int i = size; i < new_size; i++)
        arr[i] = (i + 1) * 10;

    printf("Buyutulmus dizi: ");
    for (int i = 0; i < new_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
