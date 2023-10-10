#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - funtion to show new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	int pup = 0, jo = 0, yu;
	dog_t *doge;

	while (name[pup] != '\0')
		pup++;
	while (owner[pup] != '\0')
		jo++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(pup * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (yu = 0; yu <= pup; yu++)
		doge->name[yu] = name[yu];
	doge->age = age;
	doge->owner = malloc(jo * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (yu = 0; yu <= jo; yu++)
		doge->owner[yu] = owner[yu];
	return (doge);
}
