#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - It returns the number of elements in a linked list_t list
 * @h: A list that is linked
 * Return: The number of the list elements
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
