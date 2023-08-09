#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - it returns a pointer to the space newly allocated in memory
 * It contains the string given copy as a parameter
 * @str: char
 * Return a pointer to the string that was duplicated
 * Return as NULL if insufficient memory was available
 * Return: Always 0
 */

char *_strdup(char *str)
{
char *copy;
int i, len = 0;

copy = malloc(sizeof(char) * (i + 1));
if (str == NULL)
return (NULL);
if (copy == NULL)
return (NULL);
i = 0;
while (str(i)i = '\0')
i++;
for (i = 0; i < len; i++)
copy(i) = str(i);
copy(len) = '\0';
return (copy);
}
