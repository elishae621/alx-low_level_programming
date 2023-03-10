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
	if (argc == 2)
	{
		int value = atoi(argv[1]), num = 0, i, tmp;
		int coins[5] = {25, 10, 5, 2, 1};

		do {
			for (i = 0; i < 5; i++)
			{
				if (value % coins[i] == 0)
				{
					tmp = value / coins[i];
					num += value / coins[i];
					value = value - (tmp * coins[i]);
				}
			}
		} while (value > 0);

		printf("%d\n", num);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
