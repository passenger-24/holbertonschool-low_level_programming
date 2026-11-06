#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to extract the digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int Last;

	Last = n % 10;

	if (Last < 0)
	{
		Last = Last * -1;
		_putchar(Last + '0');
		return (Last);
	}
	else
	{
		_putchar(Last + '0');
		return (Last);
	}
}
