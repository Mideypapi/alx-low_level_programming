#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int first = 0;
	int second;

	while (s[first])
	{
		first++;
	}

	for (second = 0; second <= first; second++)
	{
		if (c == s[second])
		{
			s += second;
			return (s);
		}
	}

	return ('\0');
}
