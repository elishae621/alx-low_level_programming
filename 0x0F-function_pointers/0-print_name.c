#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pinter to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}