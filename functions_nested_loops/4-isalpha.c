#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: the character to check, lowercase or uppercase
 *
 * Return: 1 if int c is a letter lower case or uppercase, return 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
