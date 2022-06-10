#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the alphabet
 * @c : skere
 * Return: 0
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar(c + '0');
	return (c);
}
