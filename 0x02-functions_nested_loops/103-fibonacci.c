#include <stdio.h>

/**
*main - prints the sum of the even-valued terms in the Fibonacci sequence
*that do not exceed 4,000,000
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k, sum;

i = 1;
j = 2;
sum = 0;

while (j <= 4000000)
{
if (j % 2 == 0)
sum += j;

k = i + j;
i = j;
j = k;
}

printf("%d\n", sum);

return (0);
}

