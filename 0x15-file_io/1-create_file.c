#include "main.h"

/**
* create_file - This is the function that creates a file with NULL content
* @filename: the filename
* @text_content: THe content supposedly Null
* Return: returns 1 on success
*/
int create_file(const char *filename, char *text_content)
{
	int file, letters_count, writer;
	if (filename)
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (file == -1)
			return (-1);
		if (!text_content)
			text_content = "";
		for (letters_count = 0; text_content[letters_count]; letters_count++)
			;
		writer = write(file, text_content, letters_count);

		if (writer == -1)
			return (-1);

		close(file);
		return (1);
	}
	else
		return (-1);
}
