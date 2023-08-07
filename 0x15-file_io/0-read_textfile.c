#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - prints what it reads, bc why not? this is a free country!
 * @filename: file
 * @letters: size of string to print
 *
 * Return: size on success, 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buffer = (char *)malloc(letters + 1);
	ssize_t size = read(file, buffer, letters);

	if (file == -1 || filename == NULL)
		return (0);

	buffer[size] = '\0';

	write(1, buffer, size);

	close(file);
	free(buffer);
	return (size);
}
