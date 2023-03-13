#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- points to a new string
 * @str: parameter
 * Return: returns a pointer
*/

char *_strdup(char *str)
{
	char *ch;
	int i, n;

	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	ch = malloc(sizeof(char) * (i + 1));

	if (ch == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		ch[n] = str[n];
	}
	return (ch);
}


