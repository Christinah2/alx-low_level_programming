#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - It deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: The pointer points to the first element in the linked list
 * Return: The data that is inside the elements that was deleted
 * Or if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int numb;

if (!head || !*head)
return (0);
numb = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (numb);
}
