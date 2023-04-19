#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - does 5 calculations
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y;
	char *op = argv[2];
	int (*selected_op)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (selected_op == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && y == 0) ||
	    (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (selected_op != NULL)
	{
		printf("%d\n", selected_op(x, y));
	}
	return (0);
}
