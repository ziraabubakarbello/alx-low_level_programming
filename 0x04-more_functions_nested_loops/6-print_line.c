#include "main.h"

/**
 * print_line - function to print line
 * @n: parameter accepted
*/

void print_line(int n)
{
	if (n >= 0)
	{
		_putchar('\n');
	}
	else 
	{
		while ( n >= 1)
		{
			_putchar('_');
			n++;
			_putchar('\n');
		}
	}
}
