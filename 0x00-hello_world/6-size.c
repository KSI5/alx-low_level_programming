#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of long: %zu byte(s)\n", sizeof(long int));
printf("size of long long: %zu byte(s)\n", sizeof(long long int));
printf("size of float: %zu byte(s)\n", sizeof(float));

return (0);
}

