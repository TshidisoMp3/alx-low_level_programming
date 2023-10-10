#include "dog.h"

/**
 * init_dog: the funtion that initalizes the dog
 * @name: shows the name of dog
 * @age: shows the age of name
 * @owner: details of owner of dog
 * @d: type of dog
 * 
 * Return: None
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
