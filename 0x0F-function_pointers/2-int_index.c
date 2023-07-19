#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an integer array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @cmp: Function pointer to the function used to compare values
 *
 * Return: Index of the first element for which cmp function does not return 0,
 *         or -1 if no element matches or if size is 0 or negative.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
