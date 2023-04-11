#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a new space in memory
 * containing a copy of a given string
 * @str: the string to copy
 *
 * Return: a pointer to the newly allocated
 * space containing the copied string,
 * or NULL if str is NULL or if malloc fails
 */


char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);

	return (new_str);
}
