#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to calculate its factorial.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
if (n < 0) /* Base case - invalid input */
return (-1);

if (n == 0) /* Base case - factorial of 0 is 1 */
return (1);

return (n * factorial(n - 1)); /* Recursive call with n - 1 */
}
