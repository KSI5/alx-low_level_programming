#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to a new string containing all the arguments,
 * separated by a newline character, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		total_len += len + 1;
		len = 0;
	}

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}

		str[len] = '\n';
		len++;
	}

	str[len] = '\0';

	return (str);
}

