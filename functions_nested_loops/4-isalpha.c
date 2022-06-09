#include <ctype.h>
#include "main.h"
/**
 * _isalpha - prints the alphabet
 * @c : skere
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 64 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
