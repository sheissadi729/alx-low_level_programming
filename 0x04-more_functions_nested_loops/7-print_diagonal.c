#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line in the terminal.
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 1; j++)
			{
				if (i != 0)
				{
					for (k = 1; k <= i; k++)
					{
						_putchar(' ');
					}
				}
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
