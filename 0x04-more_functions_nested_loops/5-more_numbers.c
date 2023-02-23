#include "main.h"

/**
 * more_numbers - prints the numbers 10 times from 0 to 14,
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			char c = j + '0';
			if (j >= 10)
			{
				char one = '0' + 1;
				_putchar(one);
				c = (j - 10) + '0';
			}
			_putchar(c);
		}
	_putchar('\n');
	}
}
