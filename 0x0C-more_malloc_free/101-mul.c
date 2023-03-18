#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - tells if the string consists of digits
 * @argv: pointer to current item in argument
 * Return: return 0 if all digits, 1 if not alldigits.
 */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '0')
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * _atoi - converts a string of ascii digits to the values
 * @s: pointer to the source string
 * Return: value of digits
 */
int _atoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}

/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			mul *= _atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d\n", mul);
	return (0);
}
