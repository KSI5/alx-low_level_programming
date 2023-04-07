#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int sum = 0, i, j;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

