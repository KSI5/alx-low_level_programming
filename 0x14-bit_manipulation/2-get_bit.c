#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to return bit
 *
 * Return: bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

return ((n >> index) & 1);
}

