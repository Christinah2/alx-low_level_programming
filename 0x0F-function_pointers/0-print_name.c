#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name using pointer to function
 * @name: The name
 * @f: The function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;
if (f == NULL)
return;
f(name);
}
