#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog structure
 * @d: dog structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name == NULL ? 
		printf("Name: (nil)\n") : printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		d->owner == NULL ? 
		printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
