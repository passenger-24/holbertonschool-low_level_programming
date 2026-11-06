#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the character to check, is >0,is 0,is <0
 *
 * Return: 1 if int n is >0, 0 if int n is 0, -1 if int n <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
