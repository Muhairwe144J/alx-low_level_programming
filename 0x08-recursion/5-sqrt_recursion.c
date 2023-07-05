#include "main.h"

/**
 * _sqrt_helper - Finds the square root of a number using binary search.
 * @n: The number to find the square root of.
 * @min: The lower bound of the search range.
 * @max: The upper bound of the search range.
 *
 * Return: The square root of n,
 * or -1 if it doesn't have a natural square root.
 */
int _sqrt_helper(int n, int min, int max)
{
int mid;

if (min > max) /* Base case - square root not found */
return (-1);

mid = (min + max) / 2; /* Find the middle element */

if (mid *mid == n) /* Base case - square root found */
return (mid);

if (mid *mid > n) /* Search in the lower half */
return (_sqrt_helper(n, min, mid - 1));

  /* Search in the upper half */
return (_sqrt_helper(n, mid + 1, max));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n,
 * or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Base case - invalid input */
return (-1);

return (_sqrt_helper(n, 0, n));
/* Start the search with the range [0, n/2] */
}

