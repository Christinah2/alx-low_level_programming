#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - It initializes a variable of type struct dog
 * @d: To initialise the dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;

}
