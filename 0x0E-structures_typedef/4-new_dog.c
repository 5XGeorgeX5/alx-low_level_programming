#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || !owner)
return (0);

dog = malloc(sizeof(dog_t));
if (!dog)
return (0);

dog->name = malloc(strlen(name) + 1);
if (!dog->name)
{
free(dog);
return (0);
}
dog->owner = malloc(strlen(owner) + 1);
if (!dog->owner)
{
free(dog->name);
free(dog);
return (0);
}
dog->name = strcpy(dog->name, name);
dog->age = age;
dog->owner = strcpy(dog->owner, owner);

return (dog);
}
