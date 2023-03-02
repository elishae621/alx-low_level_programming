#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: destination of copy
 * @src: string to be copied to dest
 * @n: limited of number of bytes
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2 = 0;

	while (src[len2] != '\0' && len2 < n)
	{
		*(dest + len2) = src[len2];
		len2++;
	}

	return (dest);
}
