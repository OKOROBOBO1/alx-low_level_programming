#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		counter++;
	}

	_putchar('\n');
}
