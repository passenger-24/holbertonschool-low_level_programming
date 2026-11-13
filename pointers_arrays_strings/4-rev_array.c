#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: first pointer
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int e;
	int tmp;

	i = 0;
	e = n - 1;

	while (i < e)
	{
		tmp = a[i];
		a[i] = a[e];
		a[e] = tmp;

		i++;
		e--;
	}
}
