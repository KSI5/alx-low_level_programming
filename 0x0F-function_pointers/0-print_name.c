#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: A pointer to the name to be printed.
 * @f: A pointer to the function to be used to print the name.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

