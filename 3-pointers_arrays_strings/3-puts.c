#include "main.h"

/**
 * _puts - prints string next to a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}
