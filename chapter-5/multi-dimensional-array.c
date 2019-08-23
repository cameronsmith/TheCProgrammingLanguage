#include <stdio.h>

int main() {
    int multi[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };

    char array_of_words[] = "One\0Two\0Three";
    char *p_array_of_words = array_of_words;

    // will print One
    printf("%s\n", array_of_words);

    // will print Two
    printf("%s\n", (p_array_of_words + 4));

    // print a single character
    // instead of a pointer we want the value at that address because we are using %c
    printf("%c\n", * (p_array_of_words + 8));
    return 0;
}