#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to new string
 */
char *_strcat(char *dest, char *src)
{
        int len_src = 0;
        int j;
        int len_dest = 0;

        for (j = 0; dest[j] != '\0'; j++)
                len_dest++;

        while (src[len_src] != '\0')
        {
                dest[len_dest] = src[len_src];
                len_src++;
                len_dest++;
        }
        return (dest);
}
