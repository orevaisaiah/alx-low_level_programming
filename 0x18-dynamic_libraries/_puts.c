#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line,
 * @str: A pointer to the string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
