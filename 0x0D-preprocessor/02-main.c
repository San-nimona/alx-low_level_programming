#include <stdio.h>
#ifndef PRINT_FILENAME
#define PRINT_FILENAME printf("%s\n", __FILE__)
#endif
/**
 * main - prints file name
 * Return: success
 */
int main (void)
{
	PRINT_FILENAME;
	return (0);
}
