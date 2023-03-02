#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
				s[i + 1] = s[i + 1] - 32;
			i++;
		}
	}
	return (s);
}
