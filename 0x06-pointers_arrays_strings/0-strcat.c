#include <string.h>
#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: the string that will bw appended
*@src: string to be concatenated upon
*
*Return: return pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
