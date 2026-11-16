#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		concat[len1 + i] = s2[i];
		i++;
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
