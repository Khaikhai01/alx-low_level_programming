#include "main.h"

/**
 * *malloc_checked - Allocated memory using malloc
 *@b: Amount of bytes
 *
 *Return: Pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
