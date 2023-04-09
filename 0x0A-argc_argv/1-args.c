#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: arg count
 * @argv: arg vector
 * Return: success
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}
