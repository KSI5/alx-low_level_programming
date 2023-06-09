#include "main.h"

/**
 * wildcmp - compare two strings and returns 1 if identical, 0 if not
 * @s1: first string
 * @s2: second string, may contain wildcard *
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
return (1);
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
}
else if (*s2 == '*')
{
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}

