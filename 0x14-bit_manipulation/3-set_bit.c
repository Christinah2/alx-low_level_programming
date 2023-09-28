#include "main.h"

/**
 * set_bit - It sets the value of a bit to 1 at a given index
 * @index: The bit index to set to 1
 * @n: The pointer to point to the number to be changed
 * Return: 1 for success, or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
