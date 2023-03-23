#include <stdio.h>

/**
*main - finds and prints the largest prime factor of the number 612852475143
*
*Return: Always 0.
*/
int main(void)
{
unsigned long int num = 612852475143;
unsigned long int factor = 2;

while (num > factor)
{
if (num % factor == 0)
{
num = num / factor;
}
else
{
factor++;
}
}

printf("%lu\n", factor);
return (0);
}

