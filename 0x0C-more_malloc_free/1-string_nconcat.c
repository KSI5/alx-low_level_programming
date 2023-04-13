#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate (up to n bytes).
 * @n: The maximum number of bytes to concatenate from @s2.
 *
 * Return: If memory allocation fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (!str)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}

