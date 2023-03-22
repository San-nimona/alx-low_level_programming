#include "main.h"

/**
 * print_last_digit - check the value
 * @n: the number
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
