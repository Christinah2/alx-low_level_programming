#ifndef LINKED
#define LINKED

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - The singly linked list
 * @len: The string length
 * @str: The string - (malloc'ed string)
 * @next: It points to the next node
 * The singly linked list node structure
 */

typedef struct list_s
{
unsigned int len;
char *str;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED*/
