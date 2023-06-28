#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char temp;

	while (*s)
	{
		length++;
		s++;
	}

	s--;

	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;

		start++;
		s--;
	}
}
