#include "main.h"
/**
 * print_line - prints a line on stdout
 * @n: number of lines to be printed
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
