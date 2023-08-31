#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
        int len = strlen(s);
        return is_palindrome_recursive(s, 0, len - 1);
}

/**
 * is_palindrome_recursive - Recursive function to check if a string is a palindrome
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end){
