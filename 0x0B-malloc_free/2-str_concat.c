#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: NiULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int first, second, third, fourth;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (first = 0; s1[first] != '\0'; first++)
		;
	for (second = 0; s2[second] != '\0'; second++)
		;
	second++;
	s = malloc(first * sizeof(*s1) + second * sizeof(*s2));
	if (s == 0)
		return (NULL);
	for (third = 0, fourth = 0; third < first + second; third++)
	{
		if (third < first)
			s[third] = s1[third];
		else
			s[third] = s2[fourth++];
	}
	return (s);
}
