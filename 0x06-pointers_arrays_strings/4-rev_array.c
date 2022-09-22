#include "main.h"

/**
 * print_array -  a function that reverses the
 * content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int i, temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
