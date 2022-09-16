#include "main.h"

/**
* _isdigit -checks if a character is a digit or not.
* @c: tested character
* Return: 1 if c is digit, 0 if otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 58))
	{
		return (1);
	}

	return (0);
}
