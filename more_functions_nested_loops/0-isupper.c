#include "main.h"

/**
 * _issuper - check if parameter is nn uppercase char
 * @c: input char
 * Return: 1 if uppercase char. 0 otherwise
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
