#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 * followed by a new line
 * Return: always 0 succes
*/

int main(void)
{
	long int i, j, k, sum;

	j = 1;

	k = 2;

	for (i = 0; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		sum = j + k;
		j = k;
		k = sum;
	}
	return (0);
}
