#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer
 *
 * Return: result
 */

int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 - (s[i] - '0');
		i++;
	}

	if (sign == 1)
	{
		result = -result;
	}
	return (result);
}
