#include "main.h"

/**
 * _putchar-  function to return a character
 * @c: parametre accepted
 * Return: returns a char type
*/

int _putchar(char c)
{
	return (write (1, &c, 1));
}
