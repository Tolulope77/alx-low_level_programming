#include "main.h"
/**
 * reverse_array - reverses an array.
 * @a: array to be reversed.
 * @n: number of elements to be reversed.
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int rev;
	int i = 0;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}

