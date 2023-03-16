#include "main.h"
#include <stdlib.h>

/**
 * _calloc - returns a pointer to a 2 dimensional array of integers
 * @size: size of array
 * @nmemb: nmemb of array
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **buffer;
	unsigned int i = 0, j = 0;

	if ((size <= 0) || (nmemb <= 0))
		return (NULL);

	buffer = malloc(sizeof(unsigned int *) * nmemb);

	if (buffer == NULL)
		return (NULL);

	while (i < nmemb)
	{
		buffer[i] = malloc(sizeof(unsigned int) * size);
		if (buffer[i] == NULL)
		{
			unsigned int k = 0;

			for (k = 0; k < i; k++)
				free(buffer[k]);
			free(buffer);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
