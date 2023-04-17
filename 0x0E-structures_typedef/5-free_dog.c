#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: a pointer to the variable
 *
 */

void free_dog(dog_t *d)
{
free(d->owner);
free(d->name);
free(d);
}
