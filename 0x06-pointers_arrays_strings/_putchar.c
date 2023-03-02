#include "main.h"
#include <unistd.h>

/**
 * _putchar- function to print to stdout
 * @c: character parameter
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
