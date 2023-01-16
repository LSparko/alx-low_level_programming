#include "dog.h"
#include <stdlib>

/**
 * free_dog - frees struct dog
 * @d: dog to be freed
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
