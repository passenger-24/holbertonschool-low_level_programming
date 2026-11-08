#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int h;
	int l;


	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
