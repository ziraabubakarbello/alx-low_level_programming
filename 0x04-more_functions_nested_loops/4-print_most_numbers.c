#include "main.h"

/**
 * print_most_numbers- prints most numbers except 2 and 4
 * Return: 1 or 0
*/

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
