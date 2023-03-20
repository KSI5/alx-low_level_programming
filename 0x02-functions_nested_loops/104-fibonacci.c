#include <stdio.h>

/**
*main - prints the first 98 Fibonacci numbers
*starting with 1 and 2, followed by a new line.
*
*Return: Always 0.
*/
int main(void)
{
int i;
unsigned long int prev = 1, curr = 2, next;

printf("%lu, %lu", prev, curr);

for (i = 2; i < 98; i++)
{
next = prev + curr;
printf(", %lu", next);
prev = curr;
curr = next;
}

printf("\n");

return (0);
}

