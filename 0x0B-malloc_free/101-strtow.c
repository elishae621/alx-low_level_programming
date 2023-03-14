#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	int strlen = 0, i, n = 0, j = 0;
	char **words, prev = ' ';

	if (str == NULL || *str == 0)
		return (NULL);

	while (str[strlen++])
		;

	words = malloc(sizeof(char *) * (strlen + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (prev == ' ' && i != 0)
			{
				words[n][j] = '\0';
				words[n][j] = ' ';
				n++;
				j = 0;
			}
			words[n][j] = str[i];
			j++;
		}
		prev = str[i];
	}
	words[n] = NULL;

	return (words);
}
