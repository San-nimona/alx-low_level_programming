#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * array_one - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array
 * Return: A pointer to the array.
 */
char *array_one(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	i = 0;
       	while (i < (size - 1))
	{
		array[i] = 'x';
		i++;
	}
	array[i] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * find_d - Converts a d character to a corresponding int.
 * @c: The character to be converted.
 *
 * Return: The converted int.
 */
int find_d(char c)
{
	int d = c - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (d);
}

/**
 * find_prod - Multiplies a string of numbers by a single d.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @d: The single d.
 * @zeroes: The necessary number of leading zeroes.
 */
void find_prod(char *prod, char *mult, int d, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * d;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @f_mul: The buffer storing the running final product.
 * @n_mul: The next product to be added.
 * @next_len: The length of n_mul.
 */
void add_nums(char *f_mul, char *n_mul, int next_len)
{
	int num, tens = 0;

	while (*(f_mul + 1))
		f_mul++;

	while (*(n_mul + 1))
		n_mul++;

	for (; *f_mul != 'x'; f_mul--)
	{
		num = (*f_mul - '0') + (*n_mul - '0');
		num += tens;
		*f_mul = (num % 10) + '0';
		tens = num / 10;

		n_mul--;
		next_len--;
	}

	for (; next_len >= 0 && *n_mul != 'x'; next_len--)
	{
		num = (*n_mul - '0');
		num += tens;
		*f_mul = (num % 10) + '0';
		tens = num / 10;

		f_mul--;
		n_mul--;
	}

	if (tens)
		*f_mul = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *f_mul, *n_mul;
	int size, i, d, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	f_mul = array_one(size + 1);
	n_mul = array_one(size + 1);

	i = find_len(argv[2]) - 1; 
	while (i >= 0)
	{
		d = find_d(*(argv[2] + i));
		find_prod(n_mul, argv[1], d, zeroes++);
		add_nums(f_mul, n_mul, size - 1);
		i--;
	}
	i = 0;
       	while (f_mul[i])
	{
		if (f_mul[i] != 'x')
			putchar(f_mul[i]);
		i++;
	}
	putchar('\n');

	free(n_mul);
	free(f_mul);

	return (0);
}
