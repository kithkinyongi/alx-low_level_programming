#include "main.h"
/**
 * _strcat - appends one string to the other
 * @dest: the destination
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lendest = 0;
	int lensrc = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		lendest++;
	for (i = 0 ; src[i] != '\0' ; i++)
		lensrc++;
	for (i = 0 ; i <= lensrc ; i++)
		dest[lendest + 1] = src[i];
	return (dest);
}
