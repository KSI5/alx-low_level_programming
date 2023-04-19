#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to main
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, 1 on incorrect number of arguments,
 *         or 2 on negative number of bytes
 */
int main(int argc, char *argv[])
{
	unsigned char *opcodes;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}

