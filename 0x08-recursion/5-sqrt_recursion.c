#include "main.h"

int get_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * get_sqrt - finds sqrt
 * @root: the root of the number
 * @num: the number
 * Return: calculate the sqrt value
 */
int get_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (get_sqrt(num, root + 1));
}
/**
 *_sqrt_recursion - finds sqrt
 * @n: the number
 * Return: the sqrt value
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (get_sqrt(n, root));
}
