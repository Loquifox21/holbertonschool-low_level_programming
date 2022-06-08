#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0
 */
int main(void)
{
	int i = 10;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

return (0);
}
