#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return 0 (Success)
 */


int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
