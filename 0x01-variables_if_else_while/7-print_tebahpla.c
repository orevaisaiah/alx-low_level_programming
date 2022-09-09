#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse,
 * followed by a new line using putchar function.
 * Return: 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
