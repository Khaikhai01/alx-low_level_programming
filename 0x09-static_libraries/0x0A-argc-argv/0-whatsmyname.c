#include <stdlib.h>
#include <stdio.h>

/**
 *main - function to print the programs name
 *@int - int parameter
 @argv: string parameter
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
