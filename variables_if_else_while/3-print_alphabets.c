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
	{
	putchar(c);
	}

	for (k = 'A'; k <= 'Z'; k++)
	{	
	putchar(k);
	}
	putchar('\n');
	return (0);

}
