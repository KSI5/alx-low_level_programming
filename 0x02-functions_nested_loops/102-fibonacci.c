#include <stdio.h>

/**
*print_fibonacci - Prints the first 50 Fibonacci numbers
*
*Return: Nothing!
*/
void print_fibonacci(void)
{
int i;
unsigned long int a = 0, b = 1, next;

for (i = 0; i < 50; i++)
{
if (i == 0)
next = 1;
else
{
next = a + b;
a = b;
b = next;
}

printf("%lu", next);

if (i != 49)
printf(", ");
}
printf("\n");
}

int main(void)
{
print_fibonacci();
return (0);
}

