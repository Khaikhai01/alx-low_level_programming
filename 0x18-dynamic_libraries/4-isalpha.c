#include "main.h"
/**
*_isalpha - determines is character is alpha
*
*@c: character to be determined
*
*Return: 1 if alpha, 0 anything else
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
