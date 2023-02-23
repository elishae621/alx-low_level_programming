#include "main.h"

/**
 * _isupper - checks for upper character
 * @c: int of character
 * Return: 1 if c is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
