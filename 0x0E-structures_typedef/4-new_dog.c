#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
doggo->name = malloc(sizeof(char) * (name) + 1);
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}

doggo->owner = malloc(sizeof(char) * (owner) + 1);
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
