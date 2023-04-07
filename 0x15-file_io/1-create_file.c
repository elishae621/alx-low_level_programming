#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: contents of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, text_len = 0;
	ssize_t wd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_TRUNC);
		close(file);
		return (1);
	}

	if (access(filename, F_OK) != -1)
	{
		file = open(filename, O_RDWR | O_TRUNC);
	}
	else
	{
		file = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	}
	if (file == -1)
		return (-1);

	while (text_content[text_len] != '\0')
		text_len++;

	wd = write(file, text_content, text_len);
	if (wd == -1)
		return (-1);

	close(file);
	return (1);
}
