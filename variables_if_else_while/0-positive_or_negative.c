#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints if a number is positive negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	return (0);
}
