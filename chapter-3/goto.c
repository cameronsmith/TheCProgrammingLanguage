#include <stdio.h>

 /**
 * Never used goto before, and it's mostly considered bad practice but including it because i've never used it before.
 *
 * @return Integer
 */
int main() {
    printf("Hello World\n");
    goto skip;

    printf("This will never print!\n");

    skip:
    printf("Skipped\n");
    return 0;
}

