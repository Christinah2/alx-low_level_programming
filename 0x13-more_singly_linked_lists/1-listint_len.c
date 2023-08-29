#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: The linked list of type listint_t to traverse
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t numb = 0;
while (h)
{
numb++;
h = h->next;
}
return (numb);
}
