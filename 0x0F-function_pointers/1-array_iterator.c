#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - performs an action for array elements
 * @array: the array
 * @size: array size
 * @action: action to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array == NULL || action == NULL)
			return;
		action(array[i]);
	}

}
