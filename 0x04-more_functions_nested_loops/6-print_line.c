#include "main.h"

/**
 * print_line - straight line
 * @n: takes value
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		_putchar(95);
	}
	_putchar(10);
}
