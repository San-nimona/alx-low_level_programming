#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - returns index of matching number
 * @size: size of array
 * @array: the array
 * @cmp: the comparison funcion pointer
 * Return: index of matching number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (i == size)
			return (-1);
		if (cmp(array[i]))
			return (i);
	}
	return (i);
}
