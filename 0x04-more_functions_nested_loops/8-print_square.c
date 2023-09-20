#include "main.h"
/**
 * print_square - prints square
 * @size: dimensions for the square
 */
void print_square(int size)
{
	int i = size;

	while (i > 0)
	{
		int j = size;

		for (; j > 0 ; j--)
			_putchar('#');
		_putchar('\n');
		i--;
	}
}
