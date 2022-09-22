#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @p: The string to be modified
 * Return: returns the modified string
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
