#include "main.h"
int main(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i != 10)
			{
				for (k = 1; k <= (10 - i); k++)
				{
					_putchar(' ');
				}
			}
	                _putchar('#');
		}
                _putchar('\n');
	}
	return (0);
}
