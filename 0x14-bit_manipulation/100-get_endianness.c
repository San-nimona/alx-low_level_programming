#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: o or 1
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);

	return (0);
}
