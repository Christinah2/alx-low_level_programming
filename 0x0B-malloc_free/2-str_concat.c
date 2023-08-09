#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * The returned pointer should point to newly allocated space in memory
 * Which contains of s1, followed by contents of s2, null terminated
 * @s1: input 1 to concat
 * @s2: input 2 to concat
 * Return: the concat of s1 and s2, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int i, ci;
if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";

i = ci = 0;
while (s1[i] != '\0')
i++;
while (s2[ci] != '\0')
ci++;
concat = (char *)malloc(sizeof(char) * (i + ci + 1));
if (concat == (NULL))
return (NULL);
i = ci = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
concat[i] = s2[ci];
i++, ci++;
}
concat[i] = '\0';
return (concat);
}
