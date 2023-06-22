#include "main.h"

/**
 * positive_or_negative - print i as  positive , negative ,zero
 * @i: integer to be printed
 *Return: (succes)
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
