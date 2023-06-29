#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13 encryption
 * @str: the string to encode
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
int i, j;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot13_alphabet[j];
break;
}
}
}

return (str);
}
