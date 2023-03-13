#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- prints to an array
 * @width: parameter
 * @height: second parameter
 * Return: returns a pointer
*/

int **alloc_grid(int width, int height)
{
	int **tda, a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tda = (sizeof(int*) * height);

	if (tda == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		tda[a] = malloc(sizeof(int) * width);

		if (tda[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(tda[a]);
			}
			free(tda);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			tda[a][b] = 0;
		}
	}
	return (tda);
}
	

