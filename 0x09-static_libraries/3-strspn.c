#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int first;
	unsigned int second;
	unsigned int third;

	for (first = 0; *(s + first) != '\0'; first++)
	{
		third = 1;
		for (second = 0; *(accept + second) != '\0'; second++)
		{
			if (*(s + first) == *(accept + second))
			{
				third = 0;
				break;
			}
		}
		if (third == 1)
			break;
	}
	return (first);
}
