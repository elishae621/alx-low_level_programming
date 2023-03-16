#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: pointer to string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int i = 0;
	char *concat;
	unsigned long int size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1++])
		;
	while (s2[size2++])
		;

	concat = malloc(sizeof(char) * (size1 + size2));

	if (concat == NULL)
		return (NULL);

	while (i < size1 - 1)
	{
		concat[i] = s1[i];
	       i++;
	}

	i = 0;
	while (i < size2 && i <= n)
	{
		concat[(size1 - 1) + i] = s2[i];
		i++;
	}
	concat[(size1 - 1) + i] = '\0';
	return (concat);
}
