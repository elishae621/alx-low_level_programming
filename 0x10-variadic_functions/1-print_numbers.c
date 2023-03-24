#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: comma to be printed between numbers
 * @n: number of numbers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int x;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num_list, int);

		printf("%d", x);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_list);
}
