#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main- sums up two integers
 * @argc: integer type argument
 * @argv: char type argument
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int num1, i, result;

	i = 1;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			if (i >= 1 && i <= 9)
			{
				num1 = atoi(argv[i]);
			}
			result += num1;
		}
		printf("%d\n", result);
	}
	return (0);
}

