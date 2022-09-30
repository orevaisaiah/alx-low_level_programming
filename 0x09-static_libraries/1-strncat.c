#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: A pointer to destination string.
 * @src: A pointer to source string.
 * @n: number of bytes to use from src.
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length + i] = src[i];
	}

	dest[length + i] = '\0';
	return (dest);
}
