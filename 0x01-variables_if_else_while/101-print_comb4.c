#include <stdio.h>

/**
*main - Prints all possible combinations of three different digits,
*in ascending order, separated by a comma followed by a space.
*
*Return: Always 0.
*/
int main(void)
{
int a, b, c;

for (a = 0; a < 1000; a++)
{
b = a / 10;
c = a % 10;

if (b < c && (b / 10) < (c / 10))
{
putchar(b / 10 + '0');
putchar(b % 10 + '0');
putchar(c / 10 + '0');
putchar(c % 10 + '0');

if (a < 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

