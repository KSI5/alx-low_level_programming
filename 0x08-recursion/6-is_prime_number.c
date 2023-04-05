#include "main.h"

/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2)); /* check if n is prime */
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (check_prime(n, i + 1));
}

