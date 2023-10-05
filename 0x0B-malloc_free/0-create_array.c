#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initiliazes with a specific char
 * @size: size of array
 * @c: character to be initialized in the array
 *
 * Return: NULL if size is 0, otherwise a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size != 0)
	{
		ptr = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			*ptr = c;
			ptr = ptr + 1;
		}
		return (ptr - size);
	}
	else
		return (NULL);
	_putchar('\n');
}
