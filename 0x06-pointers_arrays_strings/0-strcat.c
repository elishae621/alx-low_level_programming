#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of concatenation
 * @src: string to be added to dest
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
	{
		dest[len1++] = src[len2++];
	}

	dest[len1] = '\0';

	return (dest);
}
