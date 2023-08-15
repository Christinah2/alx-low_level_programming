#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gets the string length
 * @str: To measure the string
 * NULL on failure
 * Return: The string length
 */

int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 * _strcopy - The string pointed to by src is copied
 * @dest: Copy of the string stored in the buffer pointed to the dest
 * @src: Copy the sring pointed to by src
 * Return: Pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}

/**
 * new_dog - It creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The god's owner
 * NULL on failure
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);
return (doggo);
}
