#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Sets the dogs free
 * @d: for the dogs to be free
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
