#include "main.h"

/**
 * print_square - prints squares nXn
 *
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
			i++;
			/*_putchar(35);*/
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
