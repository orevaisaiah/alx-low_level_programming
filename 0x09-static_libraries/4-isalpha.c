#include "main.h"

/**
 * _isalpha - This function checks for alphabet
 * @c: the character to check
 * Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
