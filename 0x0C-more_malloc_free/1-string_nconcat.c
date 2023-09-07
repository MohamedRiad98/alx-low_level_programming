#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2;
	int i;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	concat = (char *)malloc(len1 + n + 1 * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (len1 = 0; s1[len1] != '\0';len1++)
	{
		concat[i++] = s1[len1];
	}
	for (len2 = 0; s2[len2] != '\0' && len2 < n; len2++)
	{
		concat[i++] = s2[len2];
	}
	concat[i] = '\0';
	
		return (concat);
}
