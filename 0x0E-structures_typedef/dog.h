#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type describing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - typedef of struct dog
*/

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
