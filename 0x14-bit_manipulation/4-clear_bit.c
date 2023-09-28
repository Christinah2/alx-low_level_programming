#include "main.h"

/**
 * clear_bit - It sets the value of a bit to 0 at a given index
 * @index: Clear the bit index
 * @n: The pointer to point to the number to change
 * Return: 1 for success, or 1- if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
