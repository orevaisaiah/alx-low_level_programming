#include "main.h"

/**
*_isdigit - This function checks if value is digit 0-9
*@c: int to be checked
*Return: 1 if c is a digit, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
