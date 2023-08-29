#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - It returns the sum of all the data (n) of a listint_t
 * linked list
 * @head: The first node in the linked list
 * If the list is empty, return 0
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
