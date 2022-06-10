#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the alphabet
 * @c : skere
 * Return: 0
 */
int print_last_digit(int c)
{
	int j;

	if (c < 0)
	{
		c = c * -1;
	}
	j = c % 10;
	_putchar(j + '0');
	return (j);
}
