#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - it returns a pointer to the space newly allocated in memory
 * It contains the string given copy as a parameter
 * @str: char
 * Return a pointer to the string that was duplicated
 * Return as NULL if insufficient memory was available
 * Return: 0
 */

char *_strdup(char *str)
{
char *aaa;
int i, r = 0;
i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
aaa = (char *)malloc(sizeof(char) * (i + 1));
if (aaa == NULL)
return (NULL);
for (r = 0; str[r]; r++)
aaa[r] = str[r];
return (aaa);
}
