#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pinter to first occurence of character in string or NULL if none
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
	{
		i++;
	}

	if (s[i] == '\0')
		return ('\0');
	else
		return (s + i);
}
