/**
 * init_dog - categorizing dogs
 * @d: a pointer to the variable
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
