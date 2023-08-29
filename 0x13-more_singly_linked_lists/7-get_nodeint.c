#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - It returns the node of a listint_t linked list
 * @head: The first node in the linked list
 * @index: The returned index of the node
 * where index is the index of the node, starting at 0
 * Return: The pointer that points to the node we are searching for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *temp = head;

while (temp && a < index)
{
temp = temp->next;
a++;
}
return (temp ? temp : NULL);
}
