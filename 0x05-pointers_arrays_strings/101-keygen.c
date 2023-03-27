#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: Always 0.
 */

int main(void)
{
char password[PASSWORD_LENGTH + 1] = {0};
srand(time(NULL));
int sum = 0;
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = rand() % 94 + 33;
if
(i % 2 == 0) sum += password[i];
else
sum -= password[i];
}
if
(sum < 0) password[PASSWORD_LENGTH - 1] += -sum;
else
password[PASSWORD_LENGTH - 1] -= sum;
printf("%s", password);
return (0);
}

