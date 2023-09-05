#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string containing the concatenated arguments,
 * or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the length of the new string */
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	/* Allocate memory for the new string */
	str = malloc(len + ac + 1);
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the new string, separated by \n */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
