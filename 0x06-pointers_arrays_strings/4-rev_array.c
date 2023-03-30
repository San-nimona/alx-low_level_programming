/**
 * reverse_array - a function that reverses the
 *		  content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0, temp;
	int m = n - 1;

	while (i < m)
	{
		temp = a[i];
		a[i] = a[m];
		a[m] = temp;
		i++;
		m--;
	}
}
