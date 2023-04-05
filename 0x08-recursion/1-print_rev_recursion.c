#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints the string in reverse
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
