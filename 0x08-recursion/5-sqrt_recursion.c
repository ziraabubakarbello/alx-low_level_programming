#include "main.h"

/**
 * _sqrt_recursion- square recursive
 * @n: integer parameter
 * Return: a function
*/

int _sqrt_recursion(int n)
{
	int rt;

	rt = n / 2;

	if (rt == 0)
	{
		return (-1);
	}
