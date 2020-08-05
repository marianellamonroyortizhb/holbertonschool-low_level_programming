#include"holberton.h"

#define BUF1024 (1024)
#define FILE_USAGE "Usage: cp file_from file_to\n"
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define ERR_100 "Error: Can't close fd %d\n"
/**
* main - cp
* @argc: must be 3 always
* @argv: file_from file_to
* Return: 0 ok, error is something go wrong
*/
int main(int argc, char **argv)
{
	int fd_from, fd_to, to_close, from_close, from_read, to_write;
	char buff[BUF1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, FILE_USAGE), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		from_close = close(fd_from);
		if (from_close)
			dprintf(STDERR_FILENO, ERR_100, fd_from), exit(100);
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	}
	while ((from_read = read(fd_from, buff, BUF1024)) != 0)
	{
		if (from_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		to_write = write(fd_to, buff, from_read);
		if (to_write == -1)
			dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	}
	from_close = close(fd_from);
	if (from_close)
		dprintf(STDERR_FILENO, ERR_100, fd_from), exit(100);

	to_close = close(fd_to);
	if (to_close == -1)
		dprintf(STDERR_FILENO, ERR_100, fd_to), exit(100);
	return (0);
}
