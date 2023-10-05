#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string in heap mem
 * @str: string to be duplicated
 *
 * Return: NULL (unsuccessful), a pointer to str (successful)
 */
char *_strdup(char *str)
{
	int i;
	int stringLen = 0;
	char *ptr;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			stringLen++;
		ptr = malloc(stringLen * sizeof(char));

		for (i = 0; str[i] != '\0'; i++)
		{
			*ptr = str[i];
			ptr = ptr + 1;
		}
		*(ptr + 1) = str[stringLen];
		return (ptr - stringLen);
	}
	else
		return (NULL);
	_putchar('\n');
}
