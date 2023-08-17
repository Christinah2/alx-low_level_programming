#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - choose correct function to perform the operation asked by user
 * @s: The operator passed as argument to the program
 * Return: Pointer to function that corresponds to operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
}
