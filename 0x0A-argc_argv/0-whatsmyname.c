#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
