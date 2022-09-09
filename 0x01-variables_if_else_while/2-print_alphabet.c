#include <stdio.h>

/**
 * main - This prints alphabet a - z all in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
