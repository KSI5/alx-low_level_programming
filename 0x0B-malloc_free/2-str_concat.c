#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to the concatenated string or
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
		{
			unsigned int len1 = 0, len2 = 0, i, j;
			char *result;

			if (s1 == NULL)
				s1 = "";
			if (s2 == NULL)
				s2 = "";

			while (s1[len1] != '\0')
				len1++;
			while (s2[len2] != '\0')
				len2++;

			result = malloc(sizeof(char) * (len1 + len2 + 1));

			if (result == NULL)
				return (NULL);

			for (i = 0;
					i < len1;
					i++)
				result[i] = s1[i];
			for (j = 0;
					j < len2;
					j++, i++)
				result[1] = s2[j];
			result[i] = '\0';

			return (result);
		}
