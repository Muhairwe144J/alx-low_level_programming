#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * into a single string
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to the newly allocated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, length = 0;
	int totalLength = ac; /* Account for spaces and null terminator */

	if (ac <= 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				length++;
			totalLength += length;
			length = 0;
		}
	}

	str = malloc(sizeof(char) * totalLength);
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments into the string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				str[k++] = av[i][j];
			str[k++] = '\n';
		}
	}
	str[k] = '\0';

	return (str);
}
