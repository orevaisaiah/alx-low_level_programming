#include "main.c"

/**
 * main - Entry point of the program,
 * prints  prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
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
