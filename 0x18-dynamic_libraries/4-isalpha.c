#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks is a character is alphabetic
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
