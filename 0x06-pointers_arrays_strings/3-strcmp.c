#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Integer value indicating the comparison result
 *         0 if the strings are equal
 *         Negative value if s1 is less than s2
 *         Positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
compare_value = (s1[counter] - s2[counter]);
			return (compare_value);
}
