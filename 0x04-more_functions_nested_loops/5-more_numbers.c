#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		int d = 0;

		while (d <= 14)
		{
			if (d < 10)
			{
				_putchar(d + '0');
			}
			else
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			d++;
		}
		_putchar('\n');
	}
}
