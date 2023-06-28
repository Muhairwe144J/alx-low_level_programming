#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
	int length = 0;
	char *start;

	while (*str)
	{
		length++;
		str++;
	}

	if (length % 2 == 0)
		start = str - (length / 2);
	else
		start = str - ((length - 1) / 2);

	while (*start)
	{
		_putchar(*start);
		start++;
	}

	_putchar('\n');
}
