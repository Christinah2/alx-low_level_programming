#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if it fails
 * Return status value of 98 if malloc fails
 * @b: The allocation of the number of bytes
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *memo;
memo = malloc(b);

if (memo == 0)
exit(98);
return (memo);
}
