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
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}

