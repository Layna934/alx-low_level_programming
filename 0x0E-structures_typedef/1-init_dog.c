#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *init_dog - initializes a variable of type struct dog
  *@d: pointer to variable
  *@name: first var member of struct dog
  *@age: second var member
  *@owner: thirst var member
  *
  *Return: nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
		exit(98);
	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		exit(98);
	}
	strcpy(d->owner, owner);
}
