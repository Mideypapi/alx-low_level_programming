#include "main.h"

/**
  * _puts - prints a string, followed by a new line, to stdout
  * @str: point to the string
  * Return: void
  */
void _puts(char *str)
{
	int num = 0;

	while (str[num])
	{
		_putchar(str[num]);
		num++;
	}
	_putchar('\n');
}
