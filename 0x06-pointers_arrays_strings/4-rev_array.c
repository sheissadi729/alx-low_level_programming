#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int num;

	for (i = 0; i <= n / 2; i++)
	{
		num = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = num;
	}
}
