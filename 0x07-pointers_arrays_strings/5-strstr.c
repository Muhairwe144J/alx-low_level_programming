#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
