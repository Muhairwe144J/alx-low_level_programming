#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number as a string
 * @num2: Second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	int i, j, carry, num;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			result[i + j + 1] = num % 10;
			carry = num / 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len - 1)
		i++;

	while (i < len)
		printf("%d", result[i++]);

	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
