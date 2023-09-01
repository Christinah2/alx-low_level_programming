#include "main.h"

/**
 * binary_to_uint - It converts a binary number to an unsigned int
 * @b: Is pointing to a string of 0 and 1 chars
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int dec_val = 0;

if (!b)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
dec_val = 2 * dec_val + (b[a] - '0');
}
return (dec_val);
}
