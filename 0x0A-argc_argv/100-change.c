#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int rem = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	rem = atoi(argv[1]);
	while (rem >= 25)
	{
		rem -= 25;
		coins++;
	}
	while (rem >= 10)
	{
		rem -= 10;
		coins++;
	}
	while (rem >= 5)
	{
		rem -= 5;
		coins++;
	}
	while (rem >= 2)
	{
		rem -= 2;
		coins++;
	}
	if (rem == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
