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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		des[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
