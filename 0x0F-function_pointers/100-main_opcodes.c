#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of program
 * @argc: Arguments count
 * @argv: Arguments vectors
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int size, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;
	int j = size - 1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0; 
	while (i < size)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == j)
			continue;
		printf(" ");
		address++;
		i++;
	}

	printf("\n");

	return (0);
}
