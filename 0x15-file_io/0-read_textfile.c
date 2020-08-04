#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints it to the STDOUT.
 *
 *@letters: Number of letters.
 *@filename: Pointer to filename.
 *
 * Return: The number of letters that it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	long int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	read(fd, (char *)filename, letters);

	if (fd == -1)
	{
		return (0);
	}

	else
	{
		printf("%s", filename);
		return (letters);
	}
	close(fd);
}
