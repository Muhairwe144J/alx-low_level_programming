#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Old size of the memory block
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size is equal to old_size, returns ptr
 *         If new_size is zero and ptr is not NULL, frees ptr and returns NULL
 *         If malloc fails, returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
		return (NULL);

		return (nptr);
	}
	else
	{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (nptr);
}
