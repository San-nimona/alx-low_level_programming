/**
 * string_toupper - A function that changes the string
 *		    to all CAPS
 *
 * @s: pointer to int array
 *
 *
 * Return: a pointer to string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
			*(s + i) -= 32;
	}
	return (s);
}
