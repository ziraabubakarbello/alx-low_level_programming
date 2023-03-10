#include <unistd.h>

/**
 * _putchar- function to print out characters
 * @c: character parameter
 * Return: returns a character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
