#include "main.h"

/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: the number
 * @i: the current divisor
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    if (n <= 1)
        return 0;
    if (n % i == 0 && i < n)
        return 0;
    if (i == n)
        return 1;

    return is_prime_helper(n, i + 1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return is_prime_helper(n, 2);
}
