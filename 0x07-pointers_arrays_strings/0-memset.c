#include "main.h"

/**
 *@s: pointer of the memory location where the memory will be set
 *@b: value that is to be copied to the memory block
 *@n: the number of bytes in the memory block which is set
 *Return: returns a pointer to the block of memory after populating it
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
