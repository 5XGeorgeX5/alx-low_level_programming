#ifndef DOG_H
#define DOG_H

/**
 * struct dog - categorizing dogs
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: categorizing dogs by their names, ages and owners
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
