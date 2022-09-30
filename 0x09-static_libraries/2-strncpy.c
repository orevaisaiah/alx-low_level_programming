#include "main.h"

/**
 * _strncpy - A function that copies a strings.
 * @dest: A pointer to destination string.
 * @src: A pointer to source string.
 * @n: number of bytes to use from src.
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
