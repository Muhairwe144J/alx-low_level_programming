#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
    int i, temp;

n = n -1;
i = 0;
    while (i <= n)
    {
        temp = a[i];
        a[i++] = a[n];
        a[n--] = temp;
    }
}
