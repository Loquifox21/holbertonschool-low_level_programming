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

	if (n > 5)
		printf("Last digit of %d is n % 10 and is greater than 5\n", n);
	if (n == 0)
		printf("Last digit of %d is n % 10 and is 0\n", n);
	if (n < 6 || n != 0)
		printf("Last digit of %d is n % 10 and is less than 6 and not 0\n", n);
	return (0);
}
