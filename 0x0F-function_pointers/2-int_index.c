#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - It searches for an integer
 * returns index of first element for which the cmp function does not return 0
 * @size: The number of elements in the array
 * @array: Array
 * @cmp: A pointer to the function to be used to compare values
 * If size <= 0, return -1
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
for (a = 0; a < size; a++)
{
if (cmp(array[a]) != 0)
return (a);
}
return (-1);
}
