#include "main.h"

/**
*print_line - A function to print a line
*@n: length of line
*/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
