#include "main.h"
#include <stdlib.h>
/**
 * create_file - self explanatory
 * @filename: self explanatory
 * @text_content: self explanatory
 *
 * Return: 1 on success;
*/
int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	int size = 0;
	int written;

	if (filename == NULL || file == -1)
		return (-1);

	if (text_content != NULL)
		while (text_content[size])
			size++;

	written = write(file, text_content, size);

	if (written == -1)
		return (-1);

	close(file);

	return (1);
}
/* uwo */
