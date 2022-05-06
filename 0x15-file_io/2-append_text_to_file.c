#include "main.h"

/**
* append_text_to_file - This is the function that
* appends a text to an existing file
* @filename: the Name of the file
* @text_content: The text to append.
* Return: 1 on success and -1 on error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, count, writer;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (!file)
		return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		writer = write(file, text_content, count);
		if (writer == -1)
			return (-1);
	}
	close(file);
	return (1);
}
