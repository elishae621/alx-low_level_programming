#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: pointer to arg array
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 1, sum = 1;
		while(i < argc)
		{
			sum *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum); 
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
