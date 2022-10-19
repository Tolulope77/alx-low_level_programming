#include <stdio.h>
/**
 * main - Sum of all the multiples of 3 and 5 below 1024 (excluded)
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
