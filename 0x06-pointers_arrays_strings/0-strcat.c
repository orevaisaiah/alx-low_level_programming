#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: A pointer to destination string.
 * @src: A pointer to source string.
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; src[j] != '\0'; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
}
