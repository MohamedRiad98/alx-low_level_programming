#include <stdio.h>
#include <string.h>
/*
 *
 * is_palindrome - A program to check if the string is palindrome or not by checking if the str[i] == or != str[j]
 *
 * @start - variable used to check the string from the start
 * @len - variable used to store the length of the string
 * @end - variable used to check the string from the end
 *
 *
 * Return - 1 - Successful
 */
int is_palindrome_recursive(char *s, int start, int end) {
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return is_palindrome_recursive(s, start + 1, end - 1);
}

int is_palindrome(char *s) {
    int len = strlen(s);
    return is_palindrome_recursive(s, 0, len - 1);
}
