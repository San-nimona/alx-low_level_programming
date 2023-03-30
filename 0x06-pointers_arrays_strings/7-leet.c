/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, c = 0;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int new[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == s1[i] || s[c] == s2[i])
			{
				s[c] = new[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
