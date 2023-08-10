#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * Return status value of 98 if malloc fails
 * @b: The allocation of the number of bytes
 * Return: a pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
void *memo;
memo = malloc(b);

if (memo == 0)
return (NULL);
exit(98);
return (memo);
}
