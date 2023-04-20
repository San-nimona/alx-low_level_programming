#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints n numbers
 * @separator: the separator between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			*separator = "";
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%c ", *separator);
		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}
