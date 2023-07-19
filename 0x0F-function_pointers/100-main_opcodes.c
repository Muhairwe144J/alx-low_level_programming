#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the opcode printing program
 * @argc: Argument count (number of arguments)
 * @argv: Argument vector (array of arguments)
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes
 */
int main(int argc, char *argv[])
{
unsigned char *main_addr = (unsigned char *)main;
int i, bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}

for (i = 0; i < bytes; i++)
{
printf("%02x", main_addr[i]);
if (i < bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
