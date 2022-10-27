#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to be added/appended to @dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *b = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (b);
}
