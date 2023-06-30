#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result (r), or 0 if result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k;
	int len_n1 = 0, len_n2 = 0, len_sum = 0;
	int carry = 0, digit_sum = 0;

	while (n1[len_n1] != '\0')
		len_n1++;
	while (n2[len_n2] != '\0')
		len_n2++;

	if (len_n1 > size_r || len_n2 > size_r)
		return (0);

	len_sum = (len_n1 > len_n2) ? len_n1 : len_n2;
	r[len_sum] = '\0';

	for (i = len_n1 - 1, j = len_n2 - 1, k = len_sum - 1; k >= 0; i--, j--, k--)
	{
		digit_sum = carry;
		if (i >= 0)
			digit_sum += n1[i] - '0';
		if (j >= 0)
			digit_sum += n2[j] - '0';

		carry = digit_sum / 10;
		r[k] = (digit_sum % 10) + '0';
	}

	if (carry)
	{
		if (len_sum + 1 > size_r)
			return (0);

		for (i = len_sum; i >= 0; i--)
			r[i + 1] = r[i];

		r[0] = carry + '0';
	}

	return (r);
}

