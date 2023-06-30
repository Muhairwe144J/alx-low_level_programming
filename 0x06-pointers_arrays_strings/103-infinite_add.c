#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i, j, k;

/* Calculate the lengths of n1 and n2 */
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

/* Check if the result can be stored in r */
if (len1 + len2 + 1 > size_r)
return (0);

i = len1 - 1;
j = len2 - 1;
k = size_r - 1;

/* Add digits from right to left */
while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

/* Shift the result to the beginning of the buffer if necessary */
if (k >= 0)
{
i = 0;
while (r[k] != '\0')
r[i++] = r[k++];
r[i] = '\0';
}

return (r);
}
