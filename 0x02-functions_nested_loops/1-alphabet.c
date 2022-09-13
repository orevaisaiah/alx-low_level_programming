#include "main.c"

/**
 * main - Entry point of the program,
 * function the prints lower case alphabet,
 * followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
