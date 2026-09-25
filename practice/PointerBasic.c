#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value using pointer: %d\n", *ptr);

    *ptr = 20;

    printf("New value of num: %d\n", num);

    return 0;
}
