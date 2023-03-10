#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 * @n: argument to be passed
*/

void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter > 98; --counter)
		{
			printf("%d, ", counter);
		}
	}
	else
	{
		for (counter = n; counter < 98; ++counter)
		{
			printf("%d, ", counter);
		}
	}
	printf("98\n");
}
