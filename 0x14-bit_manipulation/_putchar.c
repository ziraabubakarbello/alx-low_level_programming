#include "main.h"
#include <unistd.h>

/** _putchar- prints a singlr character byte
 * @c: character varaible
 * Return: 0 to the standard output
*/

int _putchar(char c)
{
	return (write(1,&c,1));
}
