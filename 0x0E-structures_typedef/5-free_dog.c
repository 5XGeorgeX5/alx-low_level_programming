#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: a pointer to the variable
 *
 */

void free_dog(dog_t *d)
{
if (d)
{
if (d->owner)
free(d->owner);
if (d->name)
free(d->name);
free(d);
}
}
