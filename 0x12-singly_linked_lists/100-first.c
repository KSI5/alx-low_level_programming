#include <stdio.h>

/**
 * before_main - prints "You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n"
 *
 * Description: This function is executed before
 * the main function and prints a message
 * to the standard output.
 *
 * Return: void
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
