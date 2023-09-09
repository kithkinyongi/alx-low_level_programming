#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 100 ; i++)
		putchar(i);
	for (i = 102 ; i <= 122 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
