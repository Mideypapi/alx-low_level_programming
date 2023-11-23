#include "main.h"

/**
 * flip_bits - write a function
 * to count numbr of bits and flip
 *
 * @n: number to be flipped
 * @m: number to be flipped to
 *
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int i;

	i = n ^ m;
	while (i != 0)
	{
		if ((i & 1) == 1)
			num++;
		i = i >> 1;
	}
	return (num);
}
