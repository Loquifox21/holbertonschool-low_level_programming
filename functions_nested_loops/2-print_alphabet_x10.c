#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	for (c = 0; c < 10; c++)
	_putchar(c);
	}
	_putchar('\n');
}
