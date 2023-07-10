#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free_grid
 *
 * @grid: int
 *
 * @height: int
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
