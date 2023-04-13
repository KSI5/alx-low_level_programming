#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of
 * nmemb elements of size bytes each.
 *           The memory is set to zero.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: If nmemb or size is 0, or if malloc fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}

