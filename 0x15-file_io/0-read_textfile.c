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
	ssize_t file = open(filename, O_RDONLY);
	char *buffer;
	ssize_t size;
	ssize_t written;

	if (file == -1 || filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	size = read(file, buffer, letters);
	written = write(STDOUT_FILENO, buffer, size);

	if (written == -1)
		return (0);

	close(file);
	free(buffer);

	return (written);
}
/* Owu */
