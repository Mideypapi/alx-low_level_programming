#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Desc: Copy the string pointed to by pointer `src` to
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int num = -1;

	do {
		num++;
		dest[num] = src[num];
	} while (src[num] != '\0');

	return (dest);
}
