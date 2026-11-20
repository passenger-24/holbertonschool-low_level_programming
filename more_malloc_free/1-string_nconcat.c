#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int a;
	unsigned int b;
	char *ptr;

	len1 = 0;
	len2 = 0;
	a = 0;
	b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (a < len1)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (b < n)
	{
		ptr[a] = s2[b];
		a++;
		b++;
	}
	ptr[a] = '\0';
	return (ptr);
}

