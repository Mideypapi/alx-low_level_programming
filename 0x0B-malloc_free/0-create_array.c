#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  to create the array
 * @size: for size of the array
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int num;

	if (size == 0)
		return (0);

	ptr = malloc((size) * sizeof(char));
	if (!ptr)
	{
		return (0);
	}
	for (num = 0; num < size; num++)
	{
		ptr[num] = c;
	}
	return (ptr);
}
