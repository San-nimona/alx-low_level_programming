#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a-z
 *
 * i: ASCII values
 * Return: value 0
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97 ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
