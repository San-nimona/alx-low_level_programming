#include "main.h"
/**
 * _puts - check the code
 *
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
