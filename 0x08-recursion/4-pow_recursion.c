#include "main.h"

/**
 * _pow_recursion- returns the power of an int
 * @x: first int
 * @y:second int
 * Return: back the function
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
