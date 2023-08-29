#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - It adds a new node at the beginning of a listint_t list
 * @n: The data ot add in that new node
 * @head: The pointer to point to the first node in the list
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
