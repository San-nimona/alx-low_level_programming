#include <stdio.h>
#include <stdlib.h>

/**
 * calc_coins - calculates the number of coins
 * @cent: the amount input
 * Return: success
 */
int calc_coins(int cent)
{
	int coins = 0;

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			coins++;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			coins++;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			coins++;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			coins++;
		}
		else
		{
			cent -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
/**
 * main - prints change to give
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(*(argv + 1));
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	calc_coins(i);
	return (0);
}
