#include <stdio.h>

/**
 * main - prints alpaBET
 * i: for loop
 *
 * Return: value 0
 */

int main(void)
{
        int i;

        for (i = 'a'; i <= 'z'; i++)
	{	
		if (i != 'e' && i != 113)
		{
                	putchar(i);
		}
	}
        putchar(10);
        return (0);
}

