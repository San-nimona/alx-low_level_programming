#include <stdio.h>

/**
 * main - prints a-z
 *
 * i: ASCII values
 * Return: value 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123 ; i++)
		putchar(i);
	putchar(10);
	return (0);
}
