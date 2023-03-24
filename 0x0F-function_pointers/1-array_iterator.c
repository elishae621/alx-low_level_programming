#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each elemnent of an array
 * @array: array
 * @size: size of an array
 * @action: action to carry out
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
