#include "main.h"

/**
 * flip_bits - calculates number of bits to be flipped
 *		from one number to another
 * @n: 2nd number
 * @m: 1st number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}
