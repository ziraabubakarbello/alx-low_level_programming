#include "main.h"
/**
 * rot13- function to encode a string
 * @s: parameter accepted
 * Return: returns encoded strings
*/

char *rot13(char *s)
{
	int i, j;

	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char scramble_letter[] = "AJjDeJkLmwoqWZklHxaFghpqSdUvWPrTtRzfcCiMNOXYyQsbBu";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = scramble_letter[j];
				break;
			}
		}
	}
	return (s);
}

