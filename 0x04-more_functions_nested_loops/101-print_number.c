#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int i, power, is_negative;
	long int num;

	num = n;
	is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num *= -1;
	}

	power = 1;
	while (num / power > 9)
		power *= 10;

	if (is_negative)
		_putchar('-');

	while (power > 0)
	{
		i = num / power;
		_putchar(i + '0');
		num -= i * power;
		power /= 10;
	}
}
