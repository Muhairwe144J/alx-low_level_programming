#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point for the calculator program
 * @argc: Argument count (number of arguments)
 * @argv: Argument vector (array of arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);

if (func == NULL)
{
printf("Error\n");
return (99);
}

result = func(num1, num2);
printf("%d\n", result);

return (0);
}
