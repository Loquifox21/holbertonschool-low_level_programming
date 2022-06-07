#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: 0
 */
int main(void)
{
	char c;
	char q;
	char e;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'q' && c != 'e')
		write(1, "abcdfjhijklmnoprstuvwxyz");
	putchar(c);
	}


	putchar('\n');
	return (0);

}
