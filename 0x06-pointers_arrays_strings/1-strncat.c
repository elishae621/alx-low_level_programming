#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of concatenation
 * @src: string to be added to dest
 * @n: limited of number of bytes
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0' && len2 < n)
	{
		dest[len1++] = src[len2++];
	}

	if (len2 < n)
		dest[len1] = '\0';

	return (dest);
}
