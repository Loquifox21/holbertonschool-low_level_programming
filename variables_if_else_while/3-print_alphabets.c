#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	char c;
	char k;

	for (c = 'a'; c <= 'z'; c++)
	for (k = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	putchar(k);
	}
	putchar('\n');
	return (0);

}
