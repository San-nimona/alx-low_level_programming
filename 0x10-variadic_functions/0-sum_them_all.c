#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums numbers
 * @n: number of integers
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int result = 0;
	unsigned int i;

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}
