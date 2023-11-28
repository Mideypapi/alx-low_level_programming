#include "main.h"

/**
  * create_file - create the function that creates a file.
  *
  * @filename: the name of a file to be created.
  * @text_content : write null termination string to the file
  *
  * Return: ! for success, -1 for failure
  */
int create_file(const char *filename, char *text_content)
{
	int file, res = 1, countx = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[countx])
			countx++;
	res = write(file, text_content, countx);
	}

	if (res == -1)
	return (-1);

	close(file);
	return (1);

}
