#include "main.h"

/**
 * clear_bit - clears the value at a given index
 * @n: A pointer to the bit to be set
 * @index: The index of value to be set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
