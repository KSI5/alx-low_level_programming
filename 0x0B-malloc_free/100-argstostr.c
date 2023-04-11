#include "main.h"

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
	char *str;
	int len = 0, i = 0, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			len++, j++;
		len++, i++;
	}
	len++;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			str[k] = av[i][j], j++, k++;
		str[k] = '\n', k++, i++;
	}
	str[k] = '\0';
	return (str);
}

