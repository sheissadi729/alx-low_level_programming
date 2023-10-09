#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
