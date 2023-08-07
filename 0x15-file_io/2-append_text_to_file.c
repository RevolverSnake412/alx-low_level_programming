#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - self explanatory
 * @filename: self explanatory
 * @text_content: self explanatory
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_APPEND | O_WRONLY);
	int written;
	int size = 0;

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
