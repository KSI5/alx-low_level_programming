#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
char password[11];
int i, ascii_val;

srand(time(NULL));

for (i = 0; i < 10; i++)
{
ascii_val = rand() % 94 + 33; /* Generate ascii value in range [33, 126] */
password[i] = (char) ascii_val;
}

password[i] = '\0'; /* Terminate the password string */

printf("%s\n", password);

return (0);
}

