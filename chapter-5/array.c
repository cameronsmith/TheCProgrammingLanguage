#include <stdio.h>

int main() {
    int i;
    int meatBalls[5] = {1, 2, 3, 4, 5};

    printf("Element \t Address \t Value\n");
    for(i=0; i<5; i++) {
        printf("meatBalls[%d] \t %p \t %d\n", i, &meatBalls[i], meatBalls[i]);
    }

    printf("\n\n");

    /**
     * No need to supply & as an array name is just a pointer to the first element in an array.
     */
    printf("meatBalls \t\t %p \n", meatBalls);

    /**
     * As an array is just a pointer to the first element, we can de-reference it and get the array's first element.
     */
    printf("First meatball: %d\n", *meatBalls);

    /**
     * Moving the pointer along
     */
    printf("Dereferenced Meatball array at position 2: %d\n", *(meatBalls + 2));

    /**
     * Doing this causes movie to store a pointer address allowing us to easily make changes. In contrast if we'd done
     * char movie[] = "Lego movie";
     *
     * It's almost like a constant and we'd have to go through each element changing the letter eg: [0]. [1], [2]
     */
    char * movie = "Lego Movie";
    movie = "Heat";
    printf("%s\n", movie);

    char book[17] = "Lord of The Rings";
    char * pBook = book;
    //pBook = "Book Test";

    printf("%s\n", pBook);

    return 0;
}