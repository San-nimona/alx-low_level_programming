#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of characters 0 and 1
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len;
	int base_two;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
