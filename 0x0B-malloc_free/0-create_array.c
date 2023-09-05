#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - create an array of and initialize it with a specific value
 *
 *@size: size of the array
 *@c: character
 *
 * Return: a pointer to the array, or NULL if it fails
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
