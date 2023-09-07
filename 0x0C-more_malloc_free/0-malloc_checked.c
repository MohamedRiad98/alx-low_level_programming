#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{

void *result;

	result = malloc(b);

	if (result == NULL)
	exit(1);
	
	return (b);
}
