#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins, remainder;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = cents / 25;
	remainder = cents % 25;
	coins += remainder / 10;
	remainder %= 10;
	coins += remainder / 5;
	remainder %= 5;
	coins += remainder / 2;
	remainder %= 2;
	coins += remainder;

	printf("%d\n", coins);
	return (0);
}
