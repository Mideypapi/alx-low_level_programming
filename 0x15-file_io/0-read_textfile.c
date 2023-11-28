i#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: The number of letters read and printed, or -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_distributor;
	ssize_t _reading, _writing;
	char  *pt_buffer;

	/* check if file name exist */
	if (!filename)
	{
		return (0);
	}

	/* to open file */
	file_distributor = open(filename, O_RDONLY);
	if (file_distributor == -1)
		return (0);

	/*to buffeer */
	pt_buffer = malloc(sizeof(char) * letters);
	if (pt_buffer == NULL)
		return (0);

	/* To read */
	_reading = read(file_distributor, pt_buffer, letters);
	if (_reading == -1)
	{
		free(pt_buffer);
		close(file_distributor);
		return (0);
	}

	/* To write */
	_writing = write(STDOUT_FILENO, pt_buffer, _reading);
	if (_writing == -1 || _writing != _reading)
	{
		free(pt_buffer);
		close(file_distributor);
		return (0);
	}
	close(file_distributor);
	return (_reading);
}
