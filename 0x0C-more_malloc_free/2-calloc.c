#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - writes a function that allocates
 * memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	i = malloc(nmemb * size);
	tmp = i;
	if (i == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		i[a] = 0;
	return (tmp);
}
