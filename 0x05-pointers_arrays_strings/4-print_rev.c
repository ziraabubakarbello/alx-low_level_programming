#include "main.h"

/**
 * print_rev - print characters in reverse
 * @s: parameter accepted
 * Return:0
*/

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
