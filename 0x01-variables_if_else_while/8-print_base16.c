#include <stdio.h>

/**
* main - Prints all numbers of base 16 in lowercase, followed by a new line.
*
*Return: Always 0.
*/
int main(void)
{
int i;

/*Print the digits 0-9 */
for (i = 0; i < 10; i++)
putchar(i + '0');

/*Print the letters a-f */
for (i = 0; i < 6; i++)
putchar(i + 'a');

/*Print a new line */
putchar('\n');

return (0);
}

