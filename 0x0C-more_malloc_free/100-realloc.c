#include <stdlib.h>
#include <string.h>

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
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
