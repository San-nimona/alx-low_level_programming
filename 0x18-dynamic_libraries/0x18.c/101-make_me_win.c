#include <stdio.h>
#include <stdlib.h>
/**
 * make_me_win - makes me win lotto
 * @argc: arg count
 * @argv: arg vector
 */
void make_me_win(int argc, char **argv)
{
	int my_list[] = {9, 8, 10, 24, 75, 9};
	for (int i = 0; i < 6; i++)
	{
		if (my_list[i] == atoi(argv[i + 1]))
		{
		}
		else
		{
			return;
		}
	}
	printf("--> Please make me win!\n");
}
