#include <stdio.h>

/**
 * main - sum of multiple of integers
 * Return: 0 for success
*/

int main(void)
{
	int i, result;
	int final = 1024;

	for (i = 0; i <= final; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
	return (0);
}
