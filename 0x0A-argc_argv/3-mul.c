#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2nd to 3rd argument of a program
 * @argc: counts arguments
 * @argv: 1D vector array of arguments
 *
 * Return: 0 (success), 1 - Error.
 */
int main(int argc, char *argv[])
{
	int i;
	int storeno1;
	int storeno2;
	int mul;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (i == 1)
				storeno1 = atoi(argv[i]);
			else if (i == 2)
				storeno2 = atoi(argv[i]);
		}
		mul = storeno1 * storeno2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
