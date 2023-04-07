#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: const string filename
 * @letters: number of chars to print
 * Return: actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t n = 0, printed = 0;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	while ((c = fgetc(file)) != EOF && n < letters)
	{
		printed =  write(1, &c, 1);
		if (printed != 1)
			return (0);
		n += printed;
	}

	return ((ssize_t)n);
}
