#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str == NULL, str == "", or if memory allocation fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 *         Each element of this array should contain a single word,
 *         null-terminated.
 *         The last element of the returned array should be NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] && k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;

			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				for (i = 0; i < k; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
				words[k][j] = str[i];
			words[k][j] = '\0';
			k++;
		}
	}

	words[k] = NULL;
	return (words);
}

