#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array of integers.
 * @grid: pointer to the 2 dimensionnal array
 * @height: numbers of rows of the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	
	free(grid);
	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
}
