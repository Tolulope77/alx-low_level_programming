#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: string to be printed
 * @n: number of string elements to print
 * Return: Always 0 (Nothing)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");

}
