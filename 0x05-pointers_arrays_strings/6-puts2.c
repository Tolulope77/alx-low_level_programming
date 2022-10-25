#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character.
 * @str: string to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
