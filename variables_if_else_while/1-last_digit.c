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
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, j);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
	return (0);
}
