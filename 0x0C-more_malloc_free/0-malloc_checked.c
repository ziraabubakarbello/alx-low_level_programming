#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory
 * @b: integer parameter
 * Return: returns a pointer
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
