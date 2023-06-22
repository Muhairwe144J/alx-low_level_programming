#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int i, number;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
