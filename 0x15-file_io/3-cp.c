#include "main.h"
#define BUFF_SIZE 1024

/**
  * main - the main file
  * @ac: numbr of argument count
  * @av: a pointer to indicate argumnt vector
  *
  * Return: Always return 0
  */

int main(int ac, char *av[])
{
	int f0, f1, rd_stat, wr_stat;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f0 = open(av[1], O_RDONLY);
	if (f0 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd_stat = 1;
	while (rd_stat)
	{
		rd_stat = read(f0, buffer, BUFFSIZE);
		if (rd_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rd_stat > 0)
		{
			wr_stat = write(f1, buffer, rd_stat);
			if (wr_stat != rd_stat || wr_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(f0) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f0), exit(100);
	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	return (0);
}
