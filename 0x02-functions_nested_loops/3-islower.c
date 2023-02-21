#include "main.h"

/**
 * _islower - function that checks for lower case
 * @c: takes in char arguments
 * Return: 1 if c is lowe
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
