#include "main.h"
/**
*_islower - Determines if character is lowercase
*
*@c: is parameter for a character
*
*Return: 1 (Success), 0 (Fail)
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
