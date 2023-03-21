#include <stdio.h>
/**
 * main - main block
 * 
 * 
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, next;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
