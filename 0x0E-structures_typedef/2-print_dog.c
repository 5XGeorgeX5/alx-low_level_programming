#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print all the dog categories
 * @d: a pointer to the variable
 *
 */

void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");

if (d->age)
printf("Age: %f\n", d->age);
else
printf("Age: (nil)\n");

if (d->owner)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}
