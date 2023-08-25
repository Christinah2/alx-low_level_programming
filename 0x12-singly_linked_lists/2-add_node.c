#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - It adds a new node at the beginning of a list_t list
 * @str: The string should add to the node
 * @head: The origigal linked list
 * Return: The new list address, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
while (str[length])
length++;
temp->len = length;
temp->str = strdup(str);
temp->next = *head;
*head =  temp;
return (temp);
}
