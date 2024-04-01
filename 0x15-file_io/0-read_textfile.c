#include "main.h"
/**
 * read_textfile - read a file and print it to the terminal
 * @filename: file to be read and written
 * @letters: number of characters in the file
 * Return: wr | -1 | 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	rd = read(file, buffer, letters);
	if (rd == -1)
	{
		close(file);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || rd != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (wr);
}
