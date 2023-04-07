#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Array of pointers to the arguments passed
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}

