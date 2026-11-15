#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: first pointer
 * @src: second poiter
 * @n: number of bytes to fill
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
