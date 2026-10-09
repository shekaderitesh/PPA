#include <stdio.h>

int main() {
    int n = 9;
    printf("Multiplication Table of 9:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
