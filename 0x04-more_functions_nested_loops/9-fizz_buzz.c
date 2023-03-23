#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
			printf("%d", i);
		i++;
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
