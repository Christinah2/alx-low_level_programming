#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - It deletes the node at index index of a listint_t
 * linked list
 * @head: The pointer points to the first element in the list
 * @index: To delete the index of the node
 * Return: 1 (success), or -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int a = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (a < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
a++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
