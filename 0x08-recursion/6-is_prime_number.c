#include "main.h"

int is_divisible(int num, int i);
int is_prime_number(int n);

/**
 * is_divisible - Checks divisibility
 * @num: The number to be checked
 * @i: the divisor
 *
 * Return: the divisibility 0 or 1
 */
int is_divis(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (is_divis(num, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number to be checked
 *
 * Return: prime status 0 or 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divis(n, i));
}
