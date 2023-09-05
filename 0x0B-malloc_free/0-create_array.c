#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of and initialize it with a specific value
 * @size: the desired size of the array
 * @c: the value with which the array should be initialized
 *
 * Return: NULL if size is 0 or memory allocation fails,
 * otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
		}
	}
	return (array);
}
