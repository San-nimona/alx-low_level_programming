#include "main.h"

/**
 * _isupper - check the code.
 * @c: the value
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
