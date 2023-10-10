#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
  *struct dog - a structure
  *@name: name
  *@age: age
  *@owner: owner
  *
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
