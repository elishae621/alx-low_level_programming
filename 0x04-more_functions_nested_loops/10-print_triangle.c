#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, s, t;

		for (i = 1; i <= size; i++)
		{
			for (s = 1; s <= size - i; s++)
				_putchar(' ');
			for (t = 1; t <= i; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
