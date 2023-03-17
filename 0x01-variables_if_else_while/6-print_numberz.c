#include <stdio.h>

/**
 * main - prints numbers
 * Return: value 0
 * i: takes values
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
