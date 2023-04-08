#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: takes value
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
