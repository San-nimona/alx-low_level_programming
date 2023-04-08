#include "main.h"

/**
 * _islower - indicates lowercase
 * @c: argument of function
 * Return: Always 0 (success)
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        return (0);
}
