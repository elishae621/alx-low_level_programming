#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate arguments of the program
 * @ac: number of arg
 * @av: array of args
 *
 * Return: pointer to string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0;
	char *concat;
	int size, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			sum++;
		}
		sum++;
		i++;
	}
	sum++;

	concat = malloc(sizeof(char) * sum);

	if (concat == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concat[size] = av[i][j];
			j++;
			size++;
		}
		concat[size++] = '\n';
	}
	concat[size] = '\0';
	return (concat);
}
