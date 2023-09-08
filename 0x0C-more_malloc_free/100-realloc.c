#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL) /* free the memory block if new size is zero */
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL) /* allocate a new memory block if ptr is NULL */
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size) /* do nothing if new size is equal to old size */
		return (ptr);

	new_ptr = malloc(new_size); /* allocate a new memory block of the requested size */
	if (new_ptr == NULL)
		return (NULL);

	/* copy the contents of the old memory block to the new one */
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	free(ptr); /* free the old memory block */
	return (new_ptr);
}
