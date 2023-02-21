#include "main.h"

/**
 * _isalpha - function that prints letters either upper or lower case
 * @c: character that takes in interger
 * Return: 1 if true or 0 if false
*/

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
