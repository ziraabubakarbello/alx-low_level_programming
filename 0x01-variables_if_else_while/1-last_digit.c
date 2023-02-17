#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the last digit of an integer
 *
 * Result: 0 (always successful)
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	if ((x < 6) && (x != 0))
	{
		printf("Last digit of %d is %d and less than 6 and 0\n", n, x);
	}

	return (0);
}
