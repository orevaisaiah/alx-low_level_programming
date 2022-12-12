#include "main.h"

/**
 * _strcpy - A function to copy a string
 * @dest: A pointer to destination value
 * @src: A pointer to source value
 * Return: returns the pointer to dest value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
