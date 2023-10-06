#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
