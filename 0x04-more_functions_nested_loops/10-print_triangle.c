#include "main.h"
/**
 * print_triangle - A function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < i; j++)
			{
				if ((i != size) && (j == 0))
				{
					for (k = 1; k <= (size - i); k++)
					{
						_putchar(' ');
					}
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
