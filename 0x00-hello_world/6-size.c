#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

printf("size of a char: %ld byte(s)\n",sizeof(c));

printf("size of int: %ld byte(s)\n", sizeof(i));
printf("size of long: %ld byte(s)\n", sizeof(li));
printf("size of long long: %ld byte(s)\n",sizeof(lli));
printf("size of float: %ld byte(s)\n",sizeof(f));
return (0);
}

