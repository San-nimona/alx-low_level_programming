#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: mininmum int
 * @max: max int
 * Return: a pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		array[i] = min + i;
	return (array);
}
