#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints a-z 10X
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar(10);
	}
}

