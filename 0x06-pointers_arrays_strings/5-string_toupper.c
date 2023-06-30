#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @x: pointer to string
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *x)
{
int i;

for (i = 0; x[i] != '\0'; i++)
{
if (x[i] >= 'a' && x[i] <= 'z')
x[i] = x[i] - ('a' - 'A');
}

return (x);
}
