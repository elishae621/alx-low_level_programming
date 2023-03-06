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
	int i = 0;
	int j;
	int contained = -1;

	while (s[i])
	{
		contained = -1;
		j = 0;

		while (accept[j] && contained == -1)
		{
			if (s[i] == accept[j])
				contained = 1;
			else
				contained = -1;
			j++;
		}
		if (contained == -1)
			break;
		i++;
	}
	return (i + 1);
}
