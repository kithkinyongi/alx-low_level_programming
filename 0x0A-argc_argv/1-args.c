#include <stdio.h>
/**
 * main  - prints number of aruments passed in a program
 * @argc: coutns arguments
 * @argv: 1D vector array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == argc)
			printf("%s", argv[i]);
	}
	printf("%d\n", argc - 1);
	return (0);
}
