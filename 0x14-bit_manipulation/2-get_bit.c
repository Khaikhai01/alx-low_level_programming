#include "main.h"

/**
 *get_bit - function that returns value of bit at given index
 *@n: integer parameter
 *@index: the index
 *Return:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n)
		return ((n >> index) & 0x01);
	else
		return (-1);
}
