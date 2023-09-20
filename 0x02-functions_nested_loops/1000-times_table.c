#include "main.h"
/**
 * print_times_table - A  function that prints the 9 times table.
 * @n: n times table
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int k = i * j;

				if (k < 10)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(k + '0');
				}
				if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 100) / 10) + '0');
					_putchar((k % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
}
