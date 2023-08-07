#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _close(int file);

/**
 * main - main
 * @argc: args count
 * @argv: args
 * Return: see code
*/
int main(int argc, char *argv[])
{
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char buffer[1024];
	int size;
	int written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	while ((size = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		written = write(fd_to, buffer, size);

		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}

	if (fd_from == -1 || size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	_close(fd_from);
	_close(fd_to);

	return (0);
}

/**
 * _close - close()
 * @file: file
*/
void _close(int file)
{
	int terminate = close(file);

	if (terminate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
