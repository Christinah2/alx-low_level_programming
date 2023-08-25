#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - It frees a list
 * @head: The linked list head
 * Return: none
 */

void free_list(list_t *head)
{
list_t *current_node;
while ((current_node = head) != NULL)
{
head = head->next;
free(current_node->str);
free(current_node);
}
}
