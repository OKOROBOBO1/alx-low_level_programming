#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;
	char y;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
