#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * @n: maximum number of bytes to copy from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int e;

	i = 0;
	e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[e] != '\0' && e < n)
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}
