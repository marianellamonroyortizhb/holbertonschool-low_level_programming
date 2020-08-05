#include "holberton.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: Name of the file to create.
 * @text_content: The text that the function write inside the file.
 *
 * Return: 1 if it's sucessful or -1 it's an error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd0, fd2, len;

	if (!filename)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd0 = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);

	if (fd0 == -1)
		return (-1);

	fd2 = write(fd0, text_content, len);

	if (fd2 == -1)
		return (-1);

	close(fd0);
	return (1);
}
