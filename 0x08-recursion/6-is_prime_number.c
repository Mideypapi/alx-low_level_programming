#include <stdio.h>
/**
 * prime_input - finds out if a number is prime recursively
 * @a: number to determine if prime
 * @b: number to check if divisor
 * Return: 1 if prime, 0 otherwise
 */
int prime_input(int a, int b)
{
	if (a == b)
		return (1);
	if (!(a % b))
		return (0);
	return (prime_input(a, b + 1));
}
/**
 * is_prime_number - returns if a number is prime
 * @n: check if the number is a prime
 * Return: 1 if it is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_input(n, 2));
}
