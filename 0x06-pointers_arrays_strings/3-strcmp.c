#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: Pointer to first string to compare
 * @s2: Pointer to second string to compare
 * Return: less than -1 if s1 is less than s2, 0 if they're equal,
 * more than 1 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (*s1 - *s2);
	}
	else if (s1 > s2)
	{
		return (*s1 - *s2;
	}
	else
		return (0);
}
