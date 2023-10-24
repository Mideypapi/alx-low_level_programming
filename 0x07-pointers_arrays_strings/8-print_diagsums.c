#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of diagonal
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: void.
  */
void print_diagsums(int *a, int size)
{
	int qty;
	int sum1 = 0;
	int sum2 = 0;

	for (qty = 0; qty < size; qty++)
	{
		sum1 += a[(size + 1) * qty];
		sum2 += a[(size - 1) * (qty + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
