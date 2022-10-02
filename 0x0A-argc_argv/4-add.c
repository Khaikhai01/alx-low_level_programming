#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - adds two numbers followed by new line
 *@argc: number of arguments passed
 *@argv: argument vector of pointer to string
 *
 *Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (isdigit(argv[x][y]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
