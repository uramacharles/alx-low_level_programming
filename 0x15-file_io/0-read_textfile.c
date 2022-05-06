#include "main.h"

/**
* read_textfile - Read a text and prints it out
* @filename: the input
* @letters: The wiantity of laters to be returned
* Return: Returns Zero if successful (Success)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t reader, writer;
	char *buf;

	file = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * (letters));
	if (!filename || (file == -1) || !buf)
		return (0);

	reader = read(file, buf, letters);
	writer = write(STDOUT_FILENO, buf, reader);

	close(file);
	free(buf);

	return (writer);
}
