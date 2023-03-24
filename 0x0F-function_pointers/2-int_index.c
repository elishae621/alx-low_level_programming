#include "function_pointers.h"

/**
 * int_index - searches for an index
 * @array: array
 * @size: size of the array
 * @cmp: pinter to function to compare values
 * Return: index of element in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
