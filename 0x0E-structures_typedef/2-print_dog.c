#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the details of the dog.
 * @d: dog's details to be printed.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((d->name) == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);

	if ((d->owner) == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
