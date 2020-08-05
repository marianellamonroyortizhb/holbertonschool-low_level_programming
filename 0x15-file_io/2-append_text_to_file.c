#include "holberton.h"

/**
 * append_text_to_file - Append at the end of the file
 *
 * @filename: Name of the file to create
 * @text_content: Text to write inside the file.
 * Return: Always 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd0, fd2, len;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
	}

	fd0 = open(filename, O_RDWR | O_APPEND);

	if (fd0 == -1)
		return (-1);

	fd2 = write(fd0, text_content, len);

	if (fd2 == -1)
		return (-1);

	close(fd0);
	return (1);
}
