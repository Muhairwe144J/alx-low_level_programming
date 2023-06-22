#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @num: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long int largest_prime_factor(long int num)
{
	long int i, largest_factor;

	largest_factor = -1;

	/* Divide num by 2 until it is no longer divisible by 2 */
	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	/* Check for divisibility by odd numbers starting from 3 */
	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}

	return (largest_factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_factor = largest_prime_factor(num);

	printf("The largest prime factor of %ld is %ld\n", num, largest_factor);

	return (0);
}
