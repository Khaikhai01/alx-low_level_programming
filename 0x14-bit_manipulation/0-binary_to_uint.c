#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointing to a string of 0 and 1 chars
 *
 *Return: the converted number, or 0 if
 *	  there is one or more chars in the string b that is not 0 or 1
 *        b is NULL
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return 0;

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i]-'0';
		i++;
	}

	return (val);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

        n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
