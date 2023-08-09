#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - it frees a 2 dimensional grid
 * @height: Height of a grid
 * @grid: The 2 demensional grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
