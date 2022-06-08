#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0
 */
int main(void)
{
	char i;
	char e;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');

return (0);
}
