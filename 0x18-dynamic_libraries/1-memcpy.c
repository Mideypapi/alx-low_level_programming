#include "main.h"

/**
  * _memcpy -  memory area to copy
  * @dest: pointer to return
  * @src: source
  * @n: function to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
