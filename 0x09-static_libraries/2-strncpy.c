#include "main.h"

/**
 * _strncpy - to copy a sting
 * @dest: destination od string
 * @src: source of the string
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num;

	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
