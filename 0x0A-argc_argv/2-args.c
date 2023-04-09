#include <stdio.h>

/**
 * main - prints all the command line arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: success (0)
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", *(argv + i));
	i++;
	}
	return (0);
}
