#include "main.h"
#include <stdio.h>
/**
 * puts_half - this prints the last half of string
 * @str: the string
 *
 */
void puts_half(char *str)
{
	int n;
	int len = 0;

	for (n = 0; str[n] != '\0'; n++)
		len++;
	if (len % 2 == 0)
	{
		for (n = len / 2; n < len; n++)
			printf("%c", str[n]);
	}
	else
	{
		for (n = (len - 1) / 2; n < len; n++)
			printf("%c", str[n]);
	}
	printf("\n");
}
