#include <stdio.h>

/**
 * main - a the numebr of args
 * @argc: number of args
 * @argv: pointer to arg array
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
