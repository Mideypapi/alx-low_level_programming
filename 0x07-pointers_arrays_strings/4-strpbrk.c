#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches something
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int first;
	unsigned int second;

	for (first = 0; *(s + first) != '\0'; first++)
	{
		for (second = 0; *(accept + second) != '\0'; second++)
		{
			if (*(s + first) == *(accept + second))
				return (s + first);
		}
	}
	return ('\0');
}
