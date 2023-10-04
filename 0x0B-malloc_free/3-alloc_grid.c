#include <stdlib.h>
/**
 * **alloc_grid - creates a 2 dimensional array of integers.
 * @width: number of columns of the grid
 * @height: numbers of rows of the grid
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;
	
	if ((height <= 0) || (width <= 0))
		return (NULL);
	p = (int **)malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(width * sizeof(int));
		if (*(p + i) == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free (p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
