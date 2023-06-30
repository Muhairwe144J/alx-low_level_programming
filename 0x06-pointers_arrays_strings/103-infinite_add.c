#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, i, j, carry, sum;

len1 = strlen(n1);
len2 = strlen(n2);
if (len1 > size_r || len2 > size_r)
return (0);
carry = 0;
i = len1 - 1;
j = len2 - 1;
size_r--;
r[size_r] = '\0';
while (i >= 0 || j >= 0)
{
if (i >= 0)
sum = carry + (n1[i] - '0');
else
sum = carry;
if (j >= 0)
sum += (n2[j] - '0');
carry = sum / 10;
if (size_r > 0)
{
r[--size_r] = (sum % 10) + '0';
i--;
j--;
}
else
return (0);
}
if (carry == 1 && size_r > 0)
{
r[--size_r] = carry + '0';
return (&r[size_r]);
}
else if (carry == 0)
{
return (&r[size_r]);
}
else
{
return (0);
}
}

