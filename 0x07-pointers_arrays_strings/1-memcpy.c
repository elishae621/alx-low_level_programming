#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: source of copy
 * @n: number of byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
