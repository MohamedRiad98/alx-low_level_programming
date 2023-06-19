#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main() {
    char letter;
    for (letter = 'a'; letter <='z';letter++){
        putchar(letter);
    }
    putchar('\n');
    for (letter = 'A'; letter <='Z';letter++){
    putchar(letter);
    }
    return (0);
}
