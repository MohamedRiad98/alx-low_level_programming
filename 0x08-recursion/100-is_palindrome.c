#include <stdio.h>
#include <string.h>
/*
 *
 * is_palindrome - A program to check if the string is palindrome or not by checking if the str[i] == or != str[j]
 *
 * @i - variable used with the for loop
 * @len - variable used to store the length of the string
 * @j - variable used for loop with len - 1 to check the reversed string
 *
 *
 * Return - 1 - Successful
 */
int is_palindrome(char *s) {
    int i, j;
    int len = strlen(s);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0;
        }
    }

    return 1;
}
