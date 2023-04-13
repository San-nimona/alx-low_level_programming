#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * @b: the memory size
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
