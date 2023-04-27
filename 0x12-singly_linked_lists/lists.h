#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <unistd.h>
/**
 * struct list_s - my list
 * @str: the string
 * @next: the next node
 * @len: the length
 * Description: a structure for my list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
