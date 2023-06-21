#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
unsigned int fib1 = 1;
unsigned int fib2 = 2;
unsigned int fib_next;
int count;

printf("%u, %u", fib1, fib2);

for (count = 3; count <= 98; count++)
{
fib_next = fib1 + fib2;
printf(", %u", fib_next);

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}
