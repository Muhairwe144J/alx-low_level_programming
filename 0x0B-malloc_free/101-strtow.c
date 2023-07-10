#include <stdlib.h>

int count_words(char *str);
int is_separator(char c);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, wordCount = 0, wordLength = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordCount = count_words(str);
	if (wordCount == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wordCount + 1));
	if (words == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < wordCount; i++)
	{
		while (is_separator(str[j]))
			j++;

		wordLength = 0;
		while (!is_separator(str[j + wordLength]) && str[j + wordLength] != '\0')
			wordLength++;

		words[i] = malloc(sizeof(char) * (wordLength + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < wordLength; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';

		j += wordLength;
	}

	words[i] = NULL;

	return (words);
}
/**
 * count_words - Counts the number of words in a string
 * @str: The string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
/* Skip separators */
}
else if (is_separator(str[i - 1]) || i == 0)
{
count++;
}
}

return (count);
}

/**
 * is_separator - Checks if a character is a separator
 * @c: The character
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
