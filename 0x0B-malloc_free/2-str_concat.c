#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0;
	char *concat;
	unsigned long int size1 = 0, size2 = 0, concat_size;

	while (s1[size1++])
		;
	while (s2[size2++])
		;

	concat_size = sizeof(char) * (size1 + size2 - 1);
	concat = malloc(concat_size);

	if (concat == NULL)
		return (NULL);

	while (i < size1 - 1)
	{
		concat[i] = s1[i];
	       i++;
	}

	i = 0;
	while (i < size2)
	{
		concat[(size1 - 1) + i] = s2[i];
		i++;
	}

	return (concat);
}
