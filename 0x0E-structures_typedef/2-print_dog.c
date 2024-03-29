#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	exit(EXIT_SUCCESS);
}
