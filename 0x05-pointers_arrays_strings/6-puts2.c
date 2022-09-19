#include "main.h"
#include <string.h>

/**
 * puts2 - A function that prints every secont character of a string,
 * starting with the first character, followed by a new line.
 * @str: A pointer to string
 */
void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
