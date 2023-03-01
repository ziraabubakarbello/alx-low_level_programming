#include "main.h"
/**
 * _strncpy- function to copy a string
 * @dest: parameter taken
 * @src: parameter taken
 * @n: parameter taken
 * Return: value for success
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

