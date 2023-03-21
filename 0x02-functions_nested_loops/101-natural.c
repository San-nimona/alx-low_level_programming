#include <stdio.h>

/**
 * main - Prints the sum
 * Return: Always 0
 */
int main(void)
{
	int i, m = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			m += i;
		}

		i++;
	}

	printf("%d\n", m);
	return (0);
}
