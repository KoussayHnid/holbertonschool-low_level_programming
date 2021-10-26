#include "main.h"
/**
 * free_grid - that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: int
 * @height: int
 *
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
