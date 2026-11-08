#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int l;
	int e;
	int d;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (e = 0; e < size - l - 1; e++)
			{
				_putchar(' ');
			}
			for (d = 0; d <= l; d++)
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
