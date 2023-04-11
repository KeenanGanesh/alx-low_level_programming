#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened
 * @fd_src: file desriptor of the source file
 * @fd_dest: file descriptor of the destination file
 * @argv: arguments vector
 *
 * Return: no return
 *
 */

void error_file(int fd_src, int fd_dest, char *argv[])
{
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: arguments vectors
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int fd_src, fd_dest, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Useage: cp file_from file_to");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fd_src, fd_dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_src, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(fd_dest, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(fd_src);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	err_close = close(fd_dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}
