#include "main.h"

/**
 * _strspn - gets teh length of a prefix substring
 * @s: string
 * @accept: string with bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	unsigned int i;

	while (*(s + len) != 0)
	{
		int flag = 0;

		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*(s + len) == *(accept + i))
			{
				len++;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	return (len);
}
