#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: first printed number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			/*if (i < 0)
			{
				_putchar('-');
				i = -i;
			}*/
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
