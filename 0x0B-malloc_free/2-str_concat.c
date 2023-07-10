#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the newly allocated space in memory
 * containing the concatenated strings
 * or NULL if it fails or if s1 or s2 is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int length1, length2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < length2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
