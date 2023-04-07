#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: const string filename
 * @letters: number of chars to print
 * Return: actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	rd = read(file, buffer, letters);
	if (rd == -1)
		return (0);

	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1)
		return (0);

	close(file);
	free(buffer);

	return (wd);
}
