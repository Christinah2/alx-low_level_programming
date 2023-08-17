#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point
 * This program prints its own opcodes
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1];
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)man;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i];
}
return (0);
}

