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
	int file;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t size;
	ssize_t written;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	size = read(file, buffer, letters);
	written = write(1, buffer, size);

	if (written == -1)
		return (0);

	close(file);
	free(buffer);

	return (written);
}
/* Owu */
