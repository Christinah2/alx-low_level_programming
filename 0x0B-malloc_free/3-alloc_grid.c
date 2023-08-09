#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - rreturns a pointer to a 2 dimensional array of integers
 * Initialize grid elements to 0
 * @height: height input of grid
 * @width: width input of grid
 * Return: pointer to 2 dimensional array, NULL if it fails
 */

int **alloc_grid(int width, int height)
{
int **mee;
int a, b;

if (width < 0)
return (NULL);
if (height < 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
mee[a] = malloc(sizeof(int) * width);
if (mee[a] == NULL)
{
for (; a >= 0; a--)
free(mee[a]);
free(mee);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
mee[a][b] = 0;
}
return (mee);
}
