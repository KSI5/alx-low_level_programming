#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = 1;
	int bit_found = 0;

	while (divisor <= n)
	{
		divisor <<= 1;
		bit_found = 1;
	}
	if (!bit_found)
	{
		_putchar('0');
		return;
	}
	divisor >>= 1;
	while (divisor)
	{
		if (n & divisor)
			_putchar('1');
		else
			_putchar('0');
		divisor >>= 1;
	}
}

