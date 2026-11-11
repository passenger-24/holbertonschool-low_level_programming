#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int end;
	int start;
	char tmp;

	end = 0;
	start = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (end > start)
	{
		tmp = s[end];
		s[end] = s[start];
		s[start] = tmp;
		end--;
		start++;
	}
}
