#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 * @n: size to take from s2
 *
 * Return: poiter to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, tots;
	char *new;
	int i, k;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n >= s2len)
		tots = s2len + s1len;
	else
		tots = s2len + n;
	
	new = malloc(tots + 1);
	if (new == NULL)
		return (NULL);
	
	for (i = 0, k = 0; s1[i] != '\0'; i++)
	{
		new[k] = s1[i];
		k++;
	}
	for (i = 0; s2[i] != '\0' && n != 0; i++)
	{
		new[k] = s2[i];
		n--;
		k++;
	}
	new[k] = '\0';

	return (new);
}
