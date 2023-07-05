#include "main.h"

/**
 * wildcmp - Compares two strings
 * and returns 1 if the strings can be considered
 * identical, otherwise return 0. The second string can contain the special
 * character '*' that can replace any string.
 * @s1: The first string.
 * @s2: The second string, which can contain the '*'.
 *
 * Return: 1 if the strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*') /* Skip consecutive '*' in s2 */
return (wildcmp(s1, s2 + 1));
if (!*s1) /* Base case - s2 ends with '*' and s1 is empty */
return (wildcmp(s1, s2 + 1));
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
/* Two possibilities: skip a character in s1 or skip '*' in s2 */
}
if (*s1 == *s2)
{
if (!*s1) /* Base case - both strings end */
return (1);
return (wildcmp(s1 + 1, s2 + 1));
/* Move to the next character in both strings */
}
return (0); /* Characters do not match */
}
