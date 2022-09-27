#include "main.h"

/**
 *_memcpy - copies memory area.
 *@dest: pointer to the destination array where the content is to be *copied
 *@src: pointer to soure of data to be copied
 *@n: number of bytes to be copied.
 *Return: returns a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	}
	return (dest);
}
