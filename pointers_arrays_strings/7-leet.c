#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: first pointer
 *
 * Return: pointer
 */

char *leet(char *str)
{
	int i;
	int e;
	char lettres[] = "aAeEoOtTlL";
	char chiffres[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		e = 0;
		while (lettres[e] != '\0')
		{
			if (str[i] == lettres[e])
			{
				str[i] = chiffres[e];
			}
			e++;
		}
		i++;
	}
	return (str);
}
