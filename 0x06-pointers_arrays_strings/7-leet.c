#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_letters[j] != '\0'; j++)
{
if (str[i] == leet_letters[j])
str[i] = leet_numbers[j];
}
}

return (str);
}
