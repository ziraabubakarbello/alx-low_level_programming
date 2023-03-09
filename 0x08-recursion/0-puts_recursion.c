#include "main.h"

/**
 * _puts_recursion- function to print strings
 * @s: parameter accepted
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
