#include "main.h"

/**
 * get_endianness - Function that checks endianness
 * @void: void
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
