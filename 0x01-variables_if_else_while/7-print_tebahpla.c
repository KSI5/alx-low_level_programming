#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse, followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
int i;

/*Print the alphabet in reverse */
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}

/*Print a new line */
putchar('\n');

return (0);
}

