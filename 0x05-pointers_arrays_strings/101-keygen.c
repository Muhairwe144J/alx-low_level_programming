#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 2772;
	int rand_num;

	srand(time(0));

	while (sum > 122)
	{
		rand_num = rand() % 100;
		printf("%c", rand_num);
		sum -= rand_num;
	}

	printf("%c", sum);

	return (0);
}
