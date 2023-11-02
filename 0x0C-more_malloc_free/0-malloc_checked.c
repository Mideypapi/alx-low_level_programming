#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - write a function
 * allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *n;

	n = malloc(b);
		if (n == NULL)
		exit(98);
		else
	return (n);
}
