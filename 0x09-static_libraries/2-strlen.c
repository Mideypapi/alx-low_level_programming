#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: check the string
 * Return: void
 */
int _strlen(char *s)
{
	int num = 0;

	while (s[num])
		num++;

	return (num);
}
