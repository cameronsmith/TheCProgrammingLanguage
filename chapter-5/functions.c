#include <stdio.h>

void test(int *a);

int main() {
    int a = 1;

    // prints 1
    printf("%d\n", a);

    test(&a);
    // prints 20
    printf("%d\n", a);

    return 0;
}

void test(int *a) {
    *a = 20;
}