#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - It frees a listint_t list
 * @head: The pointer points to the listint_t to be freed
 * The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
