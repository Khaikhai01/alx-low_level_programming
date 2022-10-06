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
	void *ptr;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb);
	return (ptr);
}
