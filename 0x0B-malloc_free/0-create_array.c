#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a array of chars
 * @size: size of buffer
 * @c: character
 *
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned long int i = 0;
	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	while (i < (sizeof(char) * size))
	{
		array[i] = c;
	       i++;
	}

	return (array);
}
