#include "main.h"
#include <stdio.h>

/**
*main- Prints numbers from 1 to 100 and replaces multiples of
*
*3, 5, and 15 with Fizz, Buzz, and FizzBuzz, respectively.
*
*Returns: Always 0 (Success)
*/

int main(void)

{

int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{

printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}

