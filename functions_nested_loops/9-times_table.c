#include "main.h"

/**
 * times_table - prints nine times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int nine;
	int five;
	int ten;

	for (nine = 0; nine < 10; nine++)
	{
		for (five = 0; five < 10; five++)
		{
			ten = five * nine;
			if (five != 0)
			{
				_putchar(' ');
				if (ten < 10)
					_putchar(' ');
			}
			if (ten > 9)
			{
				_putchar((ten / 10) + '0');
				_putchar((ten % 10) + '0');
			}
			else
				_putchar(ten + '0');
			if (five == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
