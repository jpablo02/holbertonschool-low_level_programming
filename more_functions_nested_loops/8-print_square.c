#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of square.
 * Return: no return.
 */
void print_square(int size)
{
	int i, a;
	
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
