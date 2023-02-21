#include "main.h"
/**
 * print_sign - function to print either a positive or negative
 * Return: 1 and prints + if n is greater than zero 0
 * @n: takes integers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
