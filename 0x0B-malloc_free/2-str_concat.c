#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- concatenate two strings
 * @s1: first parameter
 * @s2:second parameter
 * Return: a pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int a, b;

	a = b = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	conc = malloc(sizeof(char) * (a + b + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	a = b = 0;

	while (s1[a] != '\0')
	{
		conc[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		conc[a] = s2[b];
		a++;
		b++;
	}
	conc[a] = '\0';
	return (conc);
}
