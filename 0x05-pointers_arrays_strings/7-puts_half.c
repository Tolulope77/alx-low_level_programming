#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to be printed in half.
 * Return: Always 0 (Nothing)
 */
void puts_half(char *str)
{
	int len = 0, i = 0, n;

	while (str[i++])
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
