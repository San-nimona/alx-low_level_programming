#include <stdio.h>

/**
 * positive_or_negative - says if it's positive or negative
 * @i: takes no.
 *
 * Return: value 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
