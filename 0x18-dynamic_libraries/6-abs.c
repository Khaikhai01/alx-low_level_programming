#include "main.h"
/**
*_abs - gives absolute value of an integer
*
*@num: integer
*
*Return: The absolute value of num
*/
int _abs(int num)
{
	int absNum;

	if (num < 0)
	{
		absNum = num * -1;
	}
	else
	{
		absNum = num;
	}
return (absNum);
}
