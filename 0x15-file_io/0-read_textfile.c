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
	int fd0, fd1, fd2;

	if (filename == NULL)
		return (0);

	fd0 = open(filename, O_RDONLY);
		if (fd0 == -1)
			return (0);
/*		close(fd0); */

	fd1 = read(fd0, (char *)filename, letters);
		if (fd1 == -1)
			return (0);

	fd2 = write(STDOUT_FILENO, (char *)filename, letters);

		if (fd2 == -1)
			return (0);

	close(fd0);
	return (fd2);
}
