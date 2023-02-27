#include "main.h"

/**
 * _strlen - returning the length of a string
 * @s: parameter taken
 * Return: 0
*/

int _strlen(char *s)
{
	int a;

	a = 0;

	for (; *s++;)
	{
		a++;
	}
	return (a);
}
