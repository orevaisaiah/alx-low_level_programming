#include "main.h"
/**
 * print_rev - A function that reverses a string.
 * @s: A pointer to the string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, begin, end;

	begin = 0;
	end = 0;

	while (s[begin] != '\0')
		begin++;

	begin = begin - 1;
	for (i = 0; i < begin / 2; i++)
	{
		tmp = s[i];
		s[i] = s[end];
		s[end] = tmp;
		end -= 1;
	}
}
