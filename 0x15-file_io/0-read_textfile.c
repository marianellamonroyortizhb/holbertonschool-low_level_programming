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
	char *aux;

	aux = malloc(sizeof(letters));

	if (!filename)
		return (0);

	if (!aux)
		return (0);

	fd0 = open(filename, O_RDONLY);
		if (fd0 == -1)
			return (free(aux), 0);

	fd1 = read(fd0, aux, letters);
		if (fd1 == -1)
			return (free(aux), 0);

	fd2 = write(STDOUT_FILENO, aux, fd1);
		if (fd2 == -1)
			return (free(aux), 0);

/*	free(aux); */
	close(fd0);
	return (fd2);
}
