#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/* j is a counter for n bytes of src to be concatenated */
	/* i = length of destination string */

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; z < n && src[j] != '\0', i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
