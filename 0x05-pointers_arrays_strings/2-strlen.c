#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: pointer to string whose kength is to be returned
 * Return: return length of the string as int
 */

int _strlen(char *s)
{
	char *ptr = s
	int length = 0;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}
	return (length);
}
