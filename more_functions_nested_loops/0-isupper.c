#include "main.h"

/**
 * int _issuper(int c) - checks if parameter is an uppercase character
 * @c: input character
 * Return: 1 if is uppercase character. Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

