#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome
 *
 * @s: pointer to string
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to a string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len <= 1)
		return (1);
	else
		return (check_palindrome(s, len));
}

