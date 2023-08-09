#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Alloc_grid - rreturns a pointer to a 2 dimensional array of integers
 * Initialize grid elements to 0
 * @height: height input of grid
 * @width: width input of grid
 * Return: pointer to 2 dimensional array, NULL if it fails
 */

int **alloc_grid(int width, int height);
{
int **aaa;
int a, b;

if (width < 0)
return (NULL);
if (height < 0)
return (NULL);
aaa = (char *)malloc(sizeof(int *) * height);
if (aaa == NULL)
return (NULL);
for (a = o; a < height; a++)
{
aaa[a] = (char *)malloc(sizeof(int) * width);
if (aaa[a] == NULL)
{
for (; a >= 0; a--)
free(aaa[a];
free(aaa);
return (NULL);
}
}
for (a = 0; a < height; a++
{
for (b = 0; b < width; b++
aaa[a][b] = 0;
}
return (aaa);
}
