#include "main.h"

/**
  * _strstr - to locate
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int first = 0;
	int second = 0;

	while (haystack[first])
	{
		while (needle[second])
		{
			if (haystack[first + second] != needle[second])
			{
				break;
			}

			second++;
		}

		if (needle[second] == '\0')
		{
			return (haystack + first);
		}

		first++;
	}

	return ('\0');
}
