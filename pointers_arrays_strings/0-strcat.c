#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int e;

	i = 0;
	e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[e] != '\0')
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';

	return (dest);
}
