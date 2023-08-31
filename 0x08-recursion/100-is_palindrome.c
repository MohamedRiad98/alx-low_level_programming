#include <stdio.h>
#include <string.h>
/*
 *
 * is_palindrome - initalize len = strlen(s) and return the value for is_palindrome_recursive
 *
 *
 * is_palindrome_recursive - function responsible the check the passing arguements from is_palindrome it check if the start = 0 and the end wish it is equal to len - 1 then return recurisivly with increment for the start variable and decrement for the end to check both sides 
 *
 * @start - variable used to check the string from the start
 * @len - variable used to store the length of the string
 * @end - variable used to check the string from the end
 *
 *
 * Return - 1 - Successful
 */
int is_palindrome_recursive(char *s, int start, int end) 
{
	if (start >= end)
	{
	return 1;
    	}
	if (s[start] != s[end])
	{
		return 0;
	}
	return is_palindrome_recursive(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
	int len = strlen(s);
	return is_palindrome_recursive(s, 0, len - 1);
}
