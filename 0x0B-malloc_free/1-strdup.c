#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string in a newly allocated space in memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the newly allocated space
 * containing the duplicated string or NULL if it fails or if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
