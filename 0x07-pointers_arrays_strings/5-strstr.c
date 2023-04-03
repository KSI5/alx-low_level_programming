#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 * Return: pointer to the beginning of the
 * located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *n == *h)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

