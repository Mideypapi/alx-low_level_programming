#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int firstSpace = 0, secondSpace = 0;

	while (*(dest + firstSpace) != '\0')
	{
		firstSpace++;
	}

	while (secondSpace < n)
	{
		*(dest + firstSpace) = *(src + secondSpace);
		if (*(src + secondSpace) == '\0')
			break;
		firstSpace++;
		secondSpace++;
	}
	return (dest);
}
