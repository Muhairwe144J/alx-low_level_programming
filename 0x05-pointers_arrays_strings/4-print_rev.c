#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a string.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
