#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int binary = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		result += ((b[i] - '0') * binary);
		binary *= 2;
		i--;
	}
	return (result);

}
