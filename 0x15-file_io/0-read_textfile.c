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
	ssize_t read, write;
	char *buf;

	file = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * (letters));
	if (!filename || (fd == -1) || !buf)
		return (0);

	read = read(filename, buf, letters);
	write = write(STDOUT_FILENO, buf, read);

	close(file);
	free(buf);

	return (write);
}
