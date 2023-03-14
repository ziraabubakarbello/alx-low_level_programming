#include <stdlib.h>
#include <stdio.h>

/**
 * main- function to print all argument recieve
 * @argc: int parameter
 * @argv: char parameter
 * Return: 0 success
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
