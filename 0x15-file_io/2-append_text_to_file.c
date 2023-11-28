#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * append_text_to_file - write a function that
 * appends a text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: text to add
 *
 * Return: 1 on success or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_distributor;
	int _writing, count = 0;

	if (!filename)
		return (-1);

	/* to open file and append mode */
	file_distributor = open(filename, O_WRONLY | O_APPEND);
	if (file_distributor == -1)
		return (-1);

	if (!text_content)
	{
		close(file_distributor);
		return (1);
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	/* to write text into file */
	_writing = write(file_distributor, text_content, count);

	if (_writing == -1)
	{
		close(file_distributor);
		return (1);
	}
	close(file_distributor);
	return (1);
}
