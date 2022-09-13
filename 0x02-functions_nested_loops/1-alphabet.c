#include "main.c"

/**
 * print_alphabet - function the prints lower case alphabet,
 * followed by a new line.
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n')
}
