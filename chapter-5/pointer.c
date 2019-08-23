#include <stdio.h>

int main() {
    int age = 30;

    // show memory address of the age variable.
    printf("Memory Address: %p\n", &age);

    /**
     * create a pointer pAge to point to age!
     */
    int * pAge = &age;

    /**
     * De-referencing a pointer by doing *pAge; thus gets the value!
     */
    printf("Age: %d\n", *pAge);

    /**
     * De-reference now age = 12
     */
    *pAge = 12;
    printf("Age: %d\n", age);

    return 0;
}
