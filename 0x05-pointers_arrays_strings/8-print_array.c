#include <stdio.h>
/**
 * print_array - Prints elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf("\n");
	}
}
