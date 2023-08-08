#include "main.h"
/**
 * alloc_grid - returns a pointer to two dimentional array
 * @width: width of the array
 * @height: height of the grid
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **p_grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p_grid = malloc(sizeof(int *) * height);
	if (p_grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p_grid[i] = malloc(sizeof(int) * width);
		if (p_grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(p_grid[i]);
			free(p_grid);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		p_grid[i][j] = 0;
	return (p_grid);
}
