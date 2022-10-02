#include <stdio.h>

/**
 *main - function to print the programs name
 *@argc: number of arguments passed to function
 *@argv: argument vector of pointers to strings
 *Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
