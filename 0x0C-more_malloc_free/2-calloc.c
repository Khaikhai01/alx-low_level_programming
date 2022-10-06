#include "main.h"
#include <string.h>

/**
 *_calloc - sets the memory to zero
 *@nmemb: array elements
 *@size: size of each element
 *
 *Return: pointer to the memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, allocated_mem;

	char *ptr;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocated_mem = nmemb * size;

	ptr = malloc(allocated_mem);



	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < allocated_mem; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
