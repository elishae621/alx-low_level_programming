#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_c;
	char *owner_c;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_c = malloc(sizeof(dog->name) * strlen(name));
	owner_c = malloc(sizeof(dog->owner) * strlen(owner));

	if (dog == NULL || name_c == NULL || owner_c == NULL)
		return (NULL);

	strcpy(name_c, name);
	strcpy(owner_c, owner);

	dog->name = name_c;
	dog->age = age;
	dog->owner = owner_c;
	return (dog);
}
