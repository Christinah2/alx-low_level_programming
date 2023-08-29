#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - It frees a listint_t list
 * @head: The listint_t to be freed
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
