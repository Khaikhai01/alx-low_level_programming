#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@s: pointer to the block of memory to fill.
 *@b: value that is to be copied to the memory block
 *@n: the number of bytes to be filled
 *Return: pointer to the block of memory after populating it.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
