#include <stdio.h>

/**
 * main - prints all argumnets it receives
 * @argc: number of args
 * @argv: pointer to arg array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
