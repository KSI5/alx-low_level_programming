#include <stdio.h>

/**
*main - Prints the alphabet in lowercase, followed by a new line.
*
*Return: Always 0.
*/
int main(void)
{
int i;

for (i = 0; i < 26; i++)
putchar(i + 'a');

putchar('\n');

return (0);
}

