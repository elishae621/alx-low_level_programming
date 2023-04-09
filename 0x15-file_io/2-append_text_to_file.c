#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text a thte end of a file
 * @filename: filename string
 * @text_content: string content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len++] != '\0')
			;
		wd = write(fd, text_content, len);
		if (wd == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
