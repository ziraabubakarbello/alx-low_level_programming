#include "main.h"
/**
 * more_numbers - function that prints and multiplies numbers
 * Return: 1 0r 0
*/

void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		for (i = 0; i <= 14; i++ )
		{
			if (i >= 10)
			{
				_putchar('1');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
		count++;
	}

}
