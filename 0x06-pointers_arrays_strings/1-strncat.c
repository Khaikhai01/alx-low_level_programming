#include "main.h"

/**
 *_strncat - concatenates two strings but adds inputted numbers of bytes
 *@dest: the string to be appended to.
 *@src: string to be added at the end of dest.
 *@n: integer parameter used tocompared the index to.
 *Return: the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];

	return (dest);
}
