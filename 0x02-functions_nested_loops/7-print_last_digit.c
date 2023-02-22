#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: the parameter passed
 * Return: return the last digit
*/

int print_last_digit(int n)
{

	int num;

	if (n < 0)
		n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
