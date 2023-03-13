#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array
 * @size: unsigned sized of the array
 * @c: characters
 * Return: returns a pointer to the function
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = malloc(sizeof(char) * size);

	if (size == 0 || ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
