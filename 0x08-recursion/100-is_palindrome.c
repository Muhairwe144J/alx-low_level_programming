#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0') /* Base case - end of string */
return (0);

return (1 + _strlen(s + 1)); /* Recursively call with next character */
}

/**
 * is_palindrome_helper - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the string.
 * @end: The end index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end) /* Base case - palindrome condition met */
return (1);

if (s[start] != s[end]) /* Base case - not a palindrome */
return (0);

return (is_palindrome_helper(s, start + 1, end - 1));
/*Recursive call with next characters*/
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1) /* Base case - empty or single-character string is a palindrome*/
return (1);

return (is_palindrome_helper(s, 0, len - 1));
/* Start the check from the beginning and end of the string */
}
