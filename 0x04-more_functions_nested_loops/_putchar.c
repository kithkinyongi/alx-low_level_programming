#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 * @c - char to be printed
 *
 * Return: 0 (success)
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
