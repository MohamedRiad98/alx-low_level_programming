#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *block;
	int i, j;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min, j = 0; i <= max; i++, j++)
		{
			block[j] = i;
		}
		return (block);
	}
	else
		return (NULL);

}
