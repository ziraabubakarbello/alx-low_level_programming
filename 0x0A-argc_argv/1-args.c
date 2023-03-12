#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the number of arguments passed
 * @argc: int parameter counting the argv
 * @argv: char parameter array
 * Return: success
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
