#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a string with name, year, date and month
 *
 * Returns: Always 1
 */
int main(void)
{
	write(STDOUT_FILENO,"and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
