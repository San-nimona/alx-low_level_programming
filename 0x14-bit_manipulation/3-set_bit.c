#include "main.h"

/**
 * set_bit - Sets the value of given bit bit at an index
 * @n: a pointer to the bit
 * @index: The index to be set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
