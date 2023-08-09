#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Argstostr - concatenates all the arguments of the program
 * @ac: input
 * @av: a double pointer array
 * Return a pointer to a new string, NULL if it fails
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *str;

if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
str = (char *)malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[l][n]; n++)
{
str[r] = av[l][n];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}
