#include "main.h"
/**
 * free_grid - frees a 2d memory properly
 * @grid: A pointer to the pointer of the array
 * @height: number of columns
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
