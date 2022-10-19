#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Note: a series of numbers in which each number (Fibonacci number) is the
 * sum of the two preceding numbers. eg,
 *       The simplest is the series 1, 1, 2, 3, 5, 8, etc.
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
