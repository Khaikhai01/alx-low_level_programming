#include "main.h"

/**
 *get_bit - function that returns value of bit at given index
 *@n: integer parameter
 *@index: the index
 *Return:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitstatus;

	bitstatus = (n >> index) & 1;
	if (bitstatus == 0 || bitstatus == 1)
	{
		return (bitstatus);
	}
	else
		return (-1);
}
