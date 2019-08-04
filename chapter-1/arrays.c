#include <stdio.h>

void testMe(char test[]);

/**
 * Main
 *
 * @return
 */
int main() {
    char arr_array[10];

    arr_array[0] = '0';
    testMe(arr_array);
    printf("%d\tafter function: %d", arr_array[0], arr_array[1]);
    return 0;
}

/**
 * As array's are passed by reference there is no need for a return statement.
 *
 * @param test
 */
void testMe(char test[]) {
    test[1] = '9';
}
