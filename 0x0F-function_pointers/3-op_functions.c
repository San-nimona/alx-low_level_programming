#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (((a) + (b)));
}
/**
 * op_sub - subtracts 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder
 * @a: 1st number
 * @b: 2nd number
 * Return: the modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
