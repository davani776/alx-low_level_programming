#include "main.h"
/**
 * create_file - create a file and write a text
 * @filename: file to be created
 * @text_content: text to be written in the file
 * Return: 1 for succes or -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len, wr;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;

	wr = write(file, text_content, len);
	if (wr == -1)
		return (-1);
	close(file);
	return (1);
}
