#include "main.h"
/**
*_isdigit - checks if it is a digit
*
*@c: parameter integer to test
*
*Return: 1 if its )-9 else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
