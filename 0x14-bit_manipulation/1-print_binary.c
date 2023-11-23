#include "main.h"

/**
 * print_binary - write a function that
 * prints d binary representation of a number.
 *
 * @n: number
 * Return: void is returned
 */
void print_binary(unsigned long int n)
{
	char i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	i = (n & 1) ? '1' : '0';
	_putchar(i);
}
