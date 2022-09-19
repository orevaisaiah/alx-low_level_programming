#include "main.h"

/**
 * swap_int - function  that swaps the values of two integers.
 * @a: int to be swapped
 * @b: the other int to be swapped
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
