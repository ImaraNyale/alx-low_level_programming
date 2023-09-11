#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d:the individual dog
 *@name:name of the dog
 *@age:dog's age
 *@owner:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->owner = owner;
		d->name = name;
	}
}
