#include "main.c"

/**
 * print_alphabet_x10 - prints  prints 10 times the alphabet
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i;

	char a;

	for (i = 1; 1 <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	return (0);
}
