#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string to be printed in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{

		length++;

	}
	while (length)
	{
		_putchar(s[--length]);
	}
	_putchar('\n');

}
