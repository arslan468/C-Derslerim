#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    printf("arr        : %p\n", (void*)arr);
    printf("&arr[0]    : %p\n", (void*)&arr[0]);

    printf("arr[0]     : %d\n", arr[0]);
    printf("*arr       : %d\n", *arr);

    printf("arr[1]     : %d\n", arr[1]);
    printf("*(arr + 1) : %d\n", *(arr + 1));
	
	
	printf("%zu\n", sizeof(arr));   // 3 * sizeof(int)
    printf("%zu\n", sizeof(&arr));  // pointer boyutu

    return 0;
}
