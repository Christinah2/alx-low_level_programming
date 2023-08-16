#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - It prints each array element on a new 1
 * @size: The number of elements to print
 * @array: array
 * @action: The pointer to print in a regular of hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned int a;
if (array == NULL)
return;
if (action == NULL)
return;
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
