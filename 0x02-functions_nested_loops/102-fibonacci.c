#include <stdio.h>

/**
*main - Entry point of the program
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, n = 50;
long int t1 = 1, t2 = 2, next_term;

for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%ld, ", t1);
}
else
{
printf("%ld\n", t1);
}
next_term = t1 + t2;
t1 = t2;
t2 = next_term;
}
return (0);
}

