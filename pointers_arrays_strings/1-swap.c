#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: whatever
 * @b: wherever
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
