#include "main.h"

/**
 * _strlen_recursion- print the lenghth of a string
 * @s: string parameter
 * Return: void
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
