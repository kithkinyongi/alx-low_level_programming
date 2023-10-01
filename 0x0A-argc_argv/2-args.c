#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: argument count
 * @argv: 1D vetor of array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
