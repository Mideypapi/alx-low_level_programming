#include "main.h"

/**
 * binary_to_uint - write a function
 * that converts a binary numbr to an unsigned int
 *
 * @b: binary number being passed
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == NULL)
		return (0);
	for (i = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			i = i << 1;
		}
		else if (*b == '1')
		{
			i = i << 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (i);
}
