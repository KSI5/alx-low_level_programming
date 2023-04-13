#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: pointer to allocated memory
 *         if malloc fails, exit with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

