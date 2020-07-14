#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory dog structure
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
