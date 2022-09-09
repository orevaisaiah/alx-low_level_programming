#include <stdio.h>

/**
 * main - This prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * (every other function (printf,
 * puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
