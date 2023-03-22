#include <stdio.h>

/**
 * positive_or_negative - says if it's positive or negative
 * n: takes rnd no.
 * Return: value 0
*/

void positive_or_negative(int i)
{
        /* your code goes there */
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
        else
                printf("%d is zero\n", i);
}
