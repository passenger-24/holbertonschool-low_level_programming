#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 *
 * This function prints x10 the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int ligne;

	ligne = 0;
	while (ligne < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		ligne++;
	}
}
