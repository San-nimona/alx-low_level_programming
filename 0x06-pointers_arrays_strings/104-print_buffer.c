#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int b, index;

	for (b = 0; b < size; b += 10)
	{
		printf("%08x: ", b);

		for (index = 0; index < 10; index++)
		{
			if ((index + b) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + b));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + b) >= size)
				break;
			else if (*(b + index + b) >= 31 &&
				 *(b + index + b) <= 126)
				printf("%c", *(b + index + b));
			else
				printf(".");
		}
		if (b >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
