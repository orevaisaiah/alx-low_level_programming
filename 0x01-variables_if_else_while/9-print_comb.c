#include <stdio.h>

/**
 * main - program that prints all possible
 * combinations of single-digit numbers,
 * using putchar.
 * Numbers must be separated by ,, followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
