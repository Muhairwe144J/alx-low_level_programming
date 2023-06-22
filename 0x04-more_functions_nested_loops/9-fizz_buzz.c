#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - Prints the numbers from 1 to 100 with some exceptions.
 */
void fizzbuzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}

printf("\n");
}

/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
fizzbuzz();
return (0);
}

