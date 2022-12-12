#include "main.h"

/**
 * _atoi - A function that convert a string to an integer..
 * @s: The pointer to the string to be converted
 * Return: returns an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int number = 0;
	int sign = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			isi = 1;
			number = (number * 10) + (s[i] - '0');
			i++;
		}

		if (isi == 1)
		{
			break;
		}

		i++;
	}

	number *= sign;
	return (number);
}
