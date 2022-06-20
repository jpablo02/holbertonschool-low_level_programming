#include "main.h"

/**
 * _issuper - check parameter as an uppercase char
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
