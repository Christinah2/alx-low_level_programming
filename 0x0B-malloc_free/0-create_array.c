#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - of chars and initialize it with a specific char
 * @size: The size of the array
 * @c: char to assign
 * Description: To create the array of size and assign it to char c
 * Return: A pointer to the array, Or NULL if it does fail
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
