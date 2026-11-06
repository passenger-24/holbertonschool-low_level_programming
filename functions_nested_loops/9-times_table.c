#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int t;
	int n;
	int r;

	t = 0;
	while (t < 10)
	{
		n = 0;
		while (n < 10)
		{
			r = t * n;
			if (n > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (r < 10)
				{
					_putchar(' ');
				}
			}

			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			n++;
		}
		_putchar('\n');
		t++;
	}
}
