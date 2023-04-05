#include "main.h"

/**
 * find_sqrt - function that returns the square root of a number
 * @n: integer value
 * @i: integer value
 * Return: square root of n or -1 if there's no natural square root
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer value
 * Return: square root of n or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}

