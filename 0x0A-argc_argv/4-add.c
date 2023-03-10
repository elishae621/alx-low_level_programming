#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: pointer to arg array
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 1, sum = 0, value;

		while (i < argc)
		{
			value = atoi(argv[i]);
			if (isdigit(value) == 0)
			{
				sum += value;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
