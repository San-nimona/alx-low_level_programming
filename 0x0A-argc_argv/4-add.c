#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds digits only
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 - success
 *		1 - error
 */

int main(int argc, char **argv)
{
	int i, j, len;
	char *str;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		str = *(argv + i);
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (!(isdigit(str[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
