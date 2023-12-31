#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - It prints all the elements of a list_t list
 * If str is NULL, print [0] (nil)
 * @h: A pointer to the list_t list to print
 * Return: The printed number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
nodes++;
h = h->next;
}
return (nodes);
}
