#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new = NULL;
	int n1, n2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;

	new = (char *)malloc((n1 + n2 + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{

		new[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{

		new[i + j] = s2[j];
	}
	new[i + j] = '\0';

	return (new);

}
