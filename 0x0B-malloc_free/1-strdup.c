#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string
 *
 * Return: pointer to string or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *dup;
	int size = 0;

	while (str[size++])
		;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * size);

	if (dup == NULL)
		return (NULL);

	while (i < (sizeof(char) * size))
	{
		dup[i] = str[i];
	       i++;
	}

	return (dup);
}
