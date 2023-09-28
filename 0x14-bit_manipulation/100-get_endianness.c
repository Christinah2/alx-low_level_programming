#include "main.h"

/**
 * get_endianness - It checks the endianness
 * Return: 0 if it's a big endian, 1 if it's a little endian
 */

int get_endianness(void)
{
unsigned int a = 1;
char *c = (char *) &a;

return (*c);
}
