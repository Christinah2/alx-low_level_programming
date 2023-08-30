#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - It finds the loop in a linked list
 * @head: To search for the linked list
 * Return: The address of the node where the loop starts, or Null if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
