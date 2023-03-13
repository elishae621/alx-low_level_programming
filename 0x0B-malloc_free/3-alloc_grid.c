#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **buffer, i = 0, j = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	buffer = malloc(sizeof(int *) * height);

	if (buffer == NULL)
		return (NULL);

	while (i < height)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			int k = 0;

			for (k = 0; k < i; k++)
				free(buffer[k]);
			free(buffer);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
