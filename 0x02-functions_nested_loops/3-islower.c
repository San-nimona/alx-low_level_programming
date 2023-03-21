#include "main.h"

/**
 * _islower - indicates lowercase
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
