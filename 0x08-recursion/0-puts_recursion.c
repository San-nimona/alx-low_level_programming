#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
